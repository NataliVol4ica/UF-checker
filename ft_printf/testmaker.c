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
#include <libc.h>

#define ARGUMENTS "width, precision, var"
#define MAXLEN 6

typedef enum	e_length
{
	EMPTY = 0, HH = 2, H, L, LL, J, Z, T, BL
}				t_length;

typedef struct s_data
{
	char	*flaglist;
	size_t	flagnum;
	char	*typelist;
	size_t	typenum;
	size_t	flagvar;
}				t_data;

typedef struct	s_params
{
	size_t	flags[6];
	char	*length;
	char	type;
	size_t	testnum;
}				t_params;

void	set_flags(t_data *data, t_params *p, size_t num)
{
	size_t	i;

	for (i = 0; i < data->flagnum; i++)
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

void	print_params(t_data *data, t_params *p, char *arguments)
{
	printf("\n\tfprintf(fppres, \"#%04zu\");\n", p->testnum);
	printf("\tret1 = fprintf(fppres, \"|%%");
	for (size_t i = 0; i < data->flagnum; i++)
		if (p->flags[i] != 0)
			printf("%c", data->flaglist[i]);
	printf("*.*%s%c", p->length, p->type);
	printf("|\\n\", %s);\n", arguments);
	printf("\tret1 > -1 ? ft_printf(\"#%04zu\") : 1;\n", p->testnum);
	printf("\tret2 = ret1 > -1 ? ft_printf(\"|%%");
	for (size_t i = 0; i < data->flagnum; i++)
		if (p->flags[i] != 0)
			printf("%c", data->flaglist[i]);
	printf("*.*%s%c", p->length, p->type);
	printf("|\\n\", %s) : -1;\n", arguments);
	printf("\tfprintf(fppret, \"%%d\\n\", ret1);\n");
	printf("\tfprintf(fpftret, \"%%d\\n\", ret2);\n");
	printf("\t//@");
	p->testnum++;
}

void	print_var(char *vtype, char *pre)
{
	printf("\t%s\"VAR = ", pre);
	if (strstr(vtype, "intmax_t"))
		printf("%%zd");
	else if (strstr(vtype, "wchar_t *"))
		printf("\\\"%%S\\\"");
	else if (strstr(vtype, "wchar_t"))
		printf("\\\'%%C\\\'");
	else if (strstr(vtype, "int"))
		printf("%%d");
	printf("\\n\", var);\n");
}

void	make_tests(t_data *data, char *name, char *vtype)
{
	t_params *p = (t_params*)malloc(sizeof(t_params));
	p->length = (char*)malloc(sizeof(char) * 3);
	p->length[2] = '\0';
	p->testnum = 0;

	printf("#include <stdio.h>\n");
	printf("#include <stdint.h>\n");
	printf("#include <locale.h>\n");
	printf("#include <wchar.h>\n");
	printf("#include \"libftprintf.h\"\n");
	
	printf("\nsize_t %s_tests = %zu;\n", name, data->flagvar * data->typenum * (MAXLEN + 1));

	printf("\nvoid\t\t%s(int width, int precision, %svar)\n{\n", name, vtype);
	printf("\tint\t\tret1;\n\tint\t\tret2;\n");
	printf("\tchar\t*loc;\n");
	printf("\tFILE\t*fppres, *fppret, *fpftret;\n\n");

	printf("\tloc = setlocale(LC_CTYPE, NULL);\n");
	printf("\tsetlocale(LC_CTYPE, \"\");\n\n");

	printf("\tfppres = fopen(\"./files/printf_res\", \"a\");\n");
	printf("\tfppret = fopen(\"./files/printf_ret\", \"a\");\n");
	printf("\tfpftret = fopen(\"./files/ft_printf_ret\", \"a\");\n\n");

	printf("\tsetvbuf(fppres, NULL, _IONBF, 0);\n");
	printf("\tsetvbuf(fppret, NULL, _IONBF, 0);\n");
	printf("\tsetvbuf(fpftret, NULL, _IONBF, 0);\n\n");

	printf("\tfprintf(fppres, \"===\\\\ NEW TEST\\n\");\n");
	printf("\tfprintf(fppres, \"NAME = %s.c\\n\");\n", name);
	printf("\tfprintf(fppres, \"TESTS = %%zu\\n\", %s_tests);\n", name);
	printf("\tfprintf(fppres, \"WIDTH = %%d\\n\", width);\n");
	printf("\tfprintf(fppres, \"PRECISION = %%d\\n\", precision);\n");
	print_var(vtype, "fprintf(fppres, ");
	printf("\tfprintf(fppres, \"LOCALE = \\\"%%s\\\"\\n\\n\", loc);\n\n");

	printf("\tft_printf(\"===\\\\ NEW TEST\\n\");\n");
	printf("\tft_printf(\"NAME = %s.c\\n\");\n", name);
	printf("\tft_printf(\"TESTS = %%zu\\n\", %s_tests);\n", name);
	printf("\tft_printf(\"WIDTH = %%d\\n\", width);\n");
	printf("\tft_printf(\"PRECISION = %%d\\n\", precision);\n");
	print_var(vtype, "ft_printf(");
	printf("\tft_printf(\"LOCALE = \\\"%%s\\\"\\n\\n\", loc);\n\n");
	
	printf("\tsetlocale(LC_CTYPE, loc);\n");
	printf("\t//@");
	for (size_t flags = 0; flags < data->flagvar; flags++)
	{
		set_flags(data, p, flags);
		for (size_t type = 0; type < data->typenum; type++)
		{
			p->type = data->typelist[type];
			for (size_t length = 1; length < (MAXLEN + 2); length++)
			{
				set_length(p, length);
				print_params(data, p, ARGUMENTS);
			}
		}
	}
	printf("\n\tfprintf(fppres, \"\\n\");\n");
	printf("\tft_printf(\"\\n\");\n");
	printf("\tfclose(fppres);\n");
	printf("\tfclose(fppret);\n");
	printf("\tfclose(fpftret);\n");
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

void	set_data(t_data *data, char *flags, char *types)
{
	data->flaglist = flags;
	data->flagnum = strlen(flags);
	data->typelist = types;
	data->typenum = strlen(types);
	data->flagvar = 1;
	while (data->flagnum-- > 0)
		data->flagvar *= 2;
	data->flagnum = strlen(flags);
}

int		main(int ac, char **av)
{
	t_data		*data;

	if (ac == 5)
	{
		data = (t_data*)malloc(sizeof(t_data));
		set_data(data, av[3], av[4]);
		make_tests(data, av[1], replacedog(av[2]));
	}
	return (0);
}
