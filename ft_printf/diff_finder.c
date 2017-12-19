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

int		as_you_wish;

typedef struct	s_params
{
	char	*codefile;
	char	*width;
	char	*precision;
	char	*var;
	size_t	num_of_tests;
}				t_params;

typedef struct	s_line
{
	char	*str;
	char	len;
	FILE	*fd;
}				t_line;

typedef struct	s_read_lines
{
	t_line		*printf_line;
	t_line		*printf_ret;
	t_line		*ft_printf_line;
	t_line		*ft_printf_ret;
	t_line		*source_code;
}				t_read_lines;

char	*ft_strdup(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
void	read_params(t_line *line, t_params *p);
void	write_params(t_params *p);
void	skip_lines(t_line *line, int n);
void	print_error(t_params *p, t_read_lines *r);
void	print_error2(t_params *p, t_read_lines *r);
int		r_getline(t_line *line);
t_read_lines	*new_read_lines(void);

void	fatal_error(char *str)
{
	printf("[FATAL ERROR] %s\n", str);
	exit (0);
}

void	print_error(t_params *p, t_read_lines *r)
{
	size_t i = 0;
	size_t	cp;

	printf("=============\n");
	printf("Test fail: printf(");
	while (r->source_code->str[i] != '\"')
		i++;
	cp = i;
	i++;
	while (r->source_code->str[i] != '\"')
		i++;
	r->source_code->str[i] = '\0';
	printf("%s", &r->source_code->str[cp]);
	printf("\", %s, %s, %s);\n", p->width, p->precision, p->var);
	printf("Your   str: \"%s\"\n", r->ft_printf_line->str);
	printf("printf str: \"%s\"\n", r->printf_line->str);
	printf("Youret: %s\t | Libret: %s\n", r->ft_printf_ret->str, r->printf_ret->str);
}

int		main(void)
{
	t_params		*p;
	t_read_lines	*r;

	char	*temp;
	
	size_t	num_of_tests = 0;
	size_t	errors = 0;
	size_t	curtest;
	size_t	cur_c_line;

	p = (t_params*)malloc(sizeof(t_params));
	r = new_read_lines();
	while (r_getline(r->printf_line))
	{
		r_getline(r->ft_printf_line);
		if (r->printf_line->str[0] == '=')
		{
			fclose(r->source_code->fd);
			curtest = 0;
			cur_c_line = 1;
			read_params(r->printf_line, p);
			num_of_tests += p->num_of_tests;
			skip_lines(r->ft_printf_line, 7);
			temp = ft_strjoin("./testers/", p->codefile);
			r->source_code->fd = fopen(temp, "r");
			free(temp);
			getdelim(&r->source_code->str, &as_you_wish, '@', r->source_code->fd);
		}
		r_getline(r->printf_ret);
		r_getline(r->ft_printf_ret);
		if (strcmp(r->printf_line->str, r->ft_printf_line->str) || strcmp(r->printf_ret->str, r->printf_ret->str))
		{
			errors++;
			while (cur_c_line++ <= curtest)
				getdelim(&r->source_code->str, &as_you_wish, '@', r->source_code->fd);
			skip_lines(r->source_code, 2);
			r_getline(r->source_code);
			print_error(p, r);
			getdelim(&r->source_code->str, &as_you_wish, '@', r->source_code->fd);
			break;
		}
		curtest++;
	}
	fclose(r->printf_line->fd);
	fclose(r->printf_ret->fd);
	fclose(r->ft_printf_line->fd);
	fclose(r->ft_printf_ret->fd);
	fclose(r->source_code->fd);
	printf("Total number of tests:  %zu\n", num_of_tests);
	printf("Total number of errors: %zu\n", errors);
	//system("leaks differ");
	return (0);
}

int		r_getline(t_line *line)
{
	line->len = getline(&line->str, &as_you_wish, line->fd);
	if (line->len > 0)
		line->str[line->len - 1] = '\0';
	return(line->len > 0 ? 1 : 0); 
}

void	skip_lines(t_line *line, int n)
{
	size_t	r;
	
	while (n-- > 0)
		if ((r_getline(line)) <= 0)
		{
			printf("No more lines in file.\n");
			break;
		}
}

t_read_lines	*new_read_lines(void)
{
	t_read_lines	*r;

	r = (t_read_lines*)malloc(sizeof(t_read_lines));
	if (!r)
	{
		printf("Malloc ERROR\n");
		return (NULL);
	}
	r->printf_line = (t_line*)malloc(sizeof(t_line));
	r->printf_line->str = (char*)malloc(sizeof(char) * 1024);
	r->printf_line->len = 0;
	r->printf_line->fd = fopen("./files/printf_res", "r");
	r->printf_ret = (t_line*)malloc(sizeof(t_line));
	r->printf_ret->str = (char*)malloc(sizeof(char) * 1024);
	r->printf_ret->len = 0;
	r->printf_ret->fd = fopen("./files/printf_ret", "r");
	r->ft_printf_line = (t_line*)malloc(sizeof(t_line));
	r->ft_printf_line->str = (char*)malloc(sizeof(char) * 1024);
	r->ft_printf_line->len = 0;
	r->ft_printf_line->fd = fopen("./files/ft_printf_res", "r");
	r->ft_printf_ret = (t_line*)malloc(sizeof(t_line));
	r->ft_printf_ret->str = (char*)malloc(sizeof(char) * 1024);
	r->ft_printf_ret->len = 0;
	r->ft_printf_ret->fd = fopen("./files/ft_printf_ret", "r");
	r->source_code = (t_line*)malloc(sizeof(t_line));
	r->source_code->str = (char*)malloc(sizeof(char) * 1024);
	r->source_code->len = 0;
	r->source_code->fd = fopen("./files/ft_printf_ret", "r"); //чтоб потом закрыть
	setvbuf(r->printf_line->fd, NULL, _IONBF, 0);
	setvbuf(r->printf_ret->fd, NULL, _IONBF, 0);
	setvbuf(r->ft_printf_line->fd, NULL, _IONBF, 0);
	setvbuf(r->ft_printf_ret->fd, NULL, _IONBF, 0);
	setvbuf(r->source_code->fd, NULL, _IONBF, 0);
	return (r);
}

void	read_params(t_line *line, t_params *p)
{
	r_getline(line);
	p->codefile = ft_strdup(&line->str[7]);
	r_getline(line);
	p->num_of_tests = atoi(&line->str[8]);
	r_getline(line);
	p->width = ft_strdup(&line->str[8]);
	r_getline(line);
	p->precision = ft_strdup(&(line->str[12]));
	r_getline(line);
	p->var = ft_strdup(&line->str[6]);
	r_getline(line); //empty str
	r_getline(line);//getting next;
}

void	write_params(t_params *p)
{
	printf("Code file = \"%s\"\n", p->codefile);
	printf("Num of tests = %zu\n", p->num_of_tests);
	printf("Width = \"%s\"\n", p->width);
	printf("Precision = \"%s\"\n", p->precision);
	printf("Var = \"%s\"\n", p->var);
}

void	print_error2(t_params *p, t_read_lines *r)
{
	size_t i = 0;
	size_t	cp;

	printf("=============\n");
	printf("Test fail: printf(");
	while (r->source_code->str[i] != '\"')
		i++;
	cp = i;
	while (r->source_code->str[i] != '*')
		i++;
	r->source_code->str[i] = '\0';
	printf("%s", &r->source_code->str[cp]);
	r->source_code->str[i] = '*';
	printf("%s.%s", p->width, p->precision);
	i += 3;
	cp = i;
	while (r->source_code->str[i] != '\"')
		i++;
	r->source_code->str[i + 1] = '\0';
	printf("%s", &r->source_code->str[cp]);
	r->source_code->str[i + 1] = '\"';
	printf(", %s)\n", p->var);
	printf("Your   str: \"%S\"\n", r->ft_printf_line->str);
	printf("printf str: \"%S\"\n", r->printf_line->str);
	printf("Youret: %s\t | Libret: %s\n", r->ft_printf_ret->str, r->printf_ret->str);
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
	else
		i = 0;
	if (s2)
		while (s2[++j])
			res[i + j] = s2[j];
	else
		j = 0;
	res[i + j] = '\0';
	return (res);
}
