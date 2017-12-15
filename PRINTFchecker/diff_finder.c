/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   diff_finder.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkolosov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 16:05:44 by nkolosov          #+#    #+#             */
/*   Updated: 2017/12/15 16:05:44 by nkolosov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libc.h>
#include <stdlib.h>

#define FIRST_TEST_LINE 32

typedef struct	s_params
{
	char	*codefile;
	char	*width;
	char	*precision;
	char	*var;
	size_t	num_of_tests;
}				t_params;

char	*ft_strdup(const char *str);
void	read_params(FILE *fppres, char **p_str_line, t_params *p);
void	write_params(t_params *p);
void	skip_lines(FILE *fpftres, char **f_str_line, int n);
char	*ft_strjoin(char const *s1, char const *s2);

void	fatal_error(char *str)
{
	printf("[FATAL ERROR] %s\n", str);
	exit (0);
}

int		main(void)
{
	t_params	*p;

	char	*p_str_line = (char*)malloc(sizeof(char));
	char	*f_str_line = (char*)malloc(sizeof(char));
	char	*p_diff_line = (char*)malloc(sizeof(char));
	char	*f_diff_line = (char*)malloc(sizeof(char));
	char	*c_line = (char*)malloc(sizeof(char));

	FILE	*fppres, *fppret, *fpftres, *fpftret;
	FILE	*code;

	size_t	as_you_wish = 0;
	size_t	r;
	size_t	i;
	size_t	curtest;
	size_t	cur_c_line = -1;

	char	*temp;

	p = (t_params*)malloc(sizeof(t_params));
	fppres = fopen("./files/printf_res", "r");
	fppret = fopen("./files/printf_ret", "r");
	fpftres = fopen("./files/ft_printf_res", "r");
	fpftret = fopen("./files/ft_printf_ret", "r");
	code = fopen("./files/ft_printf_ret", "r");


	while ((getline(&p_str_line, &as_you_wish, fppres)) > 0)
	{
		skip_lines(fpftres, &f_str_line, 1);
		if (p_str_line[0] == '=')
		{
			fclose(code);
			curtest = 0;
			read_params(fppres, &p_str_line, p);
			skip_lines(fpftres, &f_str_line, 7);
			temp = ft_strjoin("./testers/", p->codefile);
			code = fopen(temp, "r");
			free(temp);
		}
		if (strcmp(f_str_line, p_str_line) != 0)
		{
			printf("%s\n%s\n", f_str_line, p_str_line);
			printf("Fail test #%zu\n", curtest);
			write_params(p);
			while(cur_c_line++ < curtest)
				getdelim(&c_line, &as_you_wish, '@', code);
			//printf("Code part: \"%s\"\n", c_line);
		}
		curtest++;
	}
	fclose(fppres);
	fclose(fppret);
	fclose(fpftres);
	fclose(fpftret);
	return (0);
}

void	read_params(FILE *fppres, char **p_str_line, t_params *p)
{
	size_t	as_you_wish = 0;

	getline(p_str_line, &as_you_wish, fppres);
	p->codefile = ft_strdup(&(*p_str_line)[7]);
	getline(p_str_line, &as_you_wish, fppres);
	p->num_of_tests = atoi(&(*p_str_line)[8]);
	getline(p_str_line, &as_you_wish, fppres);
	p->width = ft_strdup(&(*p_str_line)[8]);
	getline(p_str_line, &as_you_wish, fppres);
	p->precision = ft_strdup(&(*p_str_line)[12]);
	getline(p_str_line, &as_you_wish, fppres);
	p->var = ft_strdup(&(*p_str_line)[6]);
	getline(p_str_line, &as_you_wish, fppres); //empty str
	getline(p_str_line, &as_you_wish, fppres); //getting next;
}

void	write_params(t_params *p)
{
	printf("Code file = \"%s\"\n", p->codefile);
	printf("Num of tests = %d\n", p->num_of_tests);
	printf("Width = \"%s\"\n", p->width);
	printf("Precision = \"%s\"\n", p->precision);
	printf("Var = \"%s\"\n", p->var);
}

void	skip_lines(FILE *fp, char **str, int n)
{
	size_t	r;
	size_t	as_you_wish = 0;
	
	while (n-- > 0)
	{
		r = getline(str, &as_you_wish, fp);
		if (r <= 0)
		{
			printf("No more lines in file.\n");
			break;
		}
	}
}

char	*ft_strdup(const char *str)
{
	char	*ans;
	int		strl;
	int		i;

	if (!str)
		return (NULL);
	strl = 0;
	while (str[strl])
		strl++;
	strl--;
	ans = (char*)malloc(sizeof(char) * (strl + 1));
	if (!ans)
		return (ans);
	i = -1;
	while (++i < strl)
		ans[i] = str[i];
	ans[strl] = '\0';
	return (ans);
}

size_t		ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strnew(size_t size)
{
	char	*str;

	str = (char*)malloc(sizeof(char) * (size + 1));
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		j;

	res = ft_strnew(ft_strlen((char*)s1) + ft_strlen((char*)s2));
	if (!res)
		return (NULL);
	i = -1;
	j = -1;
	if (s1)
		while (s1[++i])
			res[i] = s1[i];
	if (s2)
		while (s2[++j])
			res[i + j] = s2[j];
	return (res);
}
