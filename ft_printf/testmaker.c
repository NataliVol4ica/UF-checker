/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmaker.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkolosov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 16:43:29 by nkolosov          #+#    #+#             */
/*   Updated: 2017/12/13 16:43:29 by nkolosov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define FLAGS " 0+-#\'" //6 , // 32
#define FLAGNUM 5
#define TYPES "diouxXDUO" //[0-6]numeric[6-7]signed no len[7-9]uns no len
#define NUM 2
#define NUM_ARGUMENTS "width, precision, var"

size_t flagvar = 0;

typedef enum	e_length
{
	EMPTY = 0, HH = 2, H, L, LL, J, T, Z, BL
}				t_length;

typedef struct	s_params
{
	size_t	flags[FLAGNUM];
	char	*length;
	char	type;
	size_t	testnum;
}				t_params;

void	set_flags(t_params *p, size_t num)
{
	size_t	i;

	for (i = 0; i < FLAGNUM; i++)
		p->flags[i] = 0;
	i = 0;
	while (num > 0)
	{
		p->flags[i++] = num % 2;
		num /= 2;
	}
}

void	set_length(t_params *p, size_t len)
{
	p->length[0] = '\0';
	p->length[1] = '\0';
	if (len == 2)
	{
		p->length[0] = 'h';
		p->length[1] = 'h';
	}
	else if (len == 3)
		p->length[0] = 'h';
	else if (len == 4)
		p->length[0] = 'l';
	else if (len == 5)
	{
		p->length[0] = 'l';
		p->length[1] = 'l';
	}
	else if (len == 6)
		p->length[0] = 'j';
	else if (len == 7)
		p->length[0] = 'z';
}

void	print_params(t_params *p, char *arguments)
{
	printf("\n\tfprintf(fppres, \"#%04zu\");\n", p->testnum);
	printf("\tret1 = fprintf(fppres, \"|%%");
	for (size_t i = 0; i < FLAGNUM; i++)
		if (p->flags[i] != 0)
			printf("%c", FLAGS[i]);
	printf("*.*%s%c", p->length, p->type);
	printf("|\\n\", %s);\n", arguments);
	printf("\tft_printf(\"#%04zu\");\n", p->testnum);
	printf("\tret2 = ft_printf(\"|%%");
	for (size_t i = 0; i < FLAGNUM; i++)
		if (p->flags[i] != 0)
			printf("%c", FLAGS[i]);
	printf("*.*%s%c", p->length, p->type);
	printf("|\\n\", %s);\n", arguments);
	printf("\tfprintf(fppret, \"%%d\\n\", ret1);\n");
	printf("\tfprintf(fpftret, \"%%d\\n\", ret2);\n");
	printf("\t//@");
	p->testnum++;
}

void	get_flagvar(void)
{
	size_t f;

	if (FLAGNUM <= 0)
		return ;
	flagvar = 1;
	f = FLAGNUM;
	while (f > 0)
	{
		flagvar *= 2;
		f--;
	}
}

void	make_tests(char *name, char *vtype, size_t type_from, size_t type_to)
{
	t_params *p = (t_params*)malloc(sizeof(t_params));
	p->length = (char*)malloc(sizeof(char) * 3);
	p->length[2] = '\0';
	p->testnum = 0;

	get_flagvar();
	printf("#include <stdio.h>\n");
	printf("#include <stdint.h>\n");
	printf("#include \"libftprintf.h\"\n");
	
	printf("\nsize_t %s_tests = %zu;\n", name, flagvar * (type_to - type_from) * 8);

	printf("\nvoid\t\t%s(int *n, int width, int precision, %svar)\n{\n", name, vtype);
	printf("\tint\t\tret1;\n\tint\t\tret2;\n");
	printf("\tFILE\t*fppres, *fppret, *fpftret;\n\n");

	printf("\tfppres = fopen(\"./files/printf_res\", \"a\");\n");
	printf("\tfppret = fopen(\"./files/printf_ret\", \"a\");\n");
	printf("\tfpftret = fopen(\"./files/ft_printf_ret\", \"a\");\n\n");

	printf("\tsetvbuf(fppres, NULL, _IONBF, 0);\n");
	printf("\tsetvbuf(fppret, NULL, _IONBF, 0);\n");
	printf("\tsetvbuf(fpftret, NULL, _IONBF, 0);\n");

	printf("\tfprintf(fppres, \"===\\\\ NEW TEST\\n\");\n");
	printf("\tfprintf(fppres, \"NAME = %s.c\\n\");\n", name);
	printf("\tfprintf(fppres, \"TESTS = %%zu\\n\", %s_tests);\n", name);
	printf("\tfprintf(fppres, \"WIDTH = %%d\\n\", width);\n");
	printf("\tfprintf(fppres, \"PRECISION = %%d\\n\", precision);\n");
	printf("\tfprintf(fppres, \"VAR = %%lld\\n\\n\", var);\n\n");

	printf("\tft_printf(\"===\\\\ NEW TEST\\n\");\n");
	printf("\tft_printf(\"NAME = %s.c\\n\");\n", name);
	printf("\tft_printf(\"TESTS = %%zu\\n\", %s_tests);\n", name);
	printf("\tft_printf(\"WIDTH = %%d\\n\", width);\n");
	printf("\tft_printf(\"PRECISION = %%d\\n\", precision);\n");
	printf("\tft_printf(\"VAR = %%lld\\n\\n\", var);\n");
	printf("\t//@");

	for (size_t flags = 0; flags < flagvar; flags++)
	{
		set_flags(p, flags);
		for (size_t type = type_from; type < type_to; type++)
		{
			p->type = TYPES[type];
			if (type_from < 6)
				for (size_t length = 1; length < 9; length++)
				{
					set_length(p, length);
					print_params(p, NUM_ARGUMENTS);
				}
			else
				print_params(p, NUM_ARGUMENTS);
		}
	}
	printf("\tfclose(fppres);\n");
	printf("\tfclose(fppret);\n");
	printf("\tfclose(fpftret);\n");
	printf("\t*n = *n + 1;\n");
	printf("}\n");
}

char	*replacedog(char *str)
{
	size_t	i;

	i = -1;
	while (str[++i])
		if (str[i] == '@')
			str[i] = ' ';
	return(str);
}

int		main(int ac, char **av)
{
	intmax_t num = 0;
	if (ac == 5)
	{
		//printf("Testing %s %s %d %d\n", av[1], av[2], atoi(av[3]), atoi(av[4]));
		make_tests(av[1], replacedog(av[2]), atoi(av[3]), atoi(av[4]));
	}
	return (0);
}
