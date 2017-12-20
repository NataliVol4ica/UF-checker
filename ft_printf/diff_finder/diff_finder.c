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
#include "diff_finder.h"

void	fatal_error(char *str)
{
	printf("[FATAL ERROR] %s\n", str);
	exit (0);
}

void	print_error(FILE *f, t_params *p, t_read_lines *r)
{
	size_t i = 0;
	size_t	cp;

	fprintf(f, "=============\n");
	fprintf(f, "Test fail: printf(");
	while (r->source_code->str[i] != '\"')
		i++;
	cp = i;
	i++;
	while (r->source_code->str[i] != '\"')
		i++;
	r->source_code->str[i] = '\0';
	save_fail(&r->source_code->str[cp]);
	fprintf(f, "%s", &r->source_code->str[cp]);
	fprintf(f, "\", %s, %s, %s);\n", p->width, p->precision, p->var);
	fprintf(f, "Your   str: \"%s\"\n", r->ft_printf_line->str);
	fprintf(f, "printf str: \"%s\"\n", r->printf_line->str);
	fprintf(f, "Youret: %s\t | Libret: %s\n", r->ft_printf_ret->str, r->printf_ret->str);
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

	FILE	*fails;

	fails = fopen("./files/fails", "w");
	p = (t_params*)malloc(sizeof(t_params));
	r = new_read_lines();
	zero_result();
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
			skip_lines(r->ft_printf_line, 8);
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
			print_error(fails, p, r);
			getdelim(&r->source_code->str, &as_you_wish, '@', r->source_code->fd);
		}
		curtest++;
	}
	fclose(r->printf_line->fd);
	fclose(r->printf_ret->fd);
	fclose(r->ft_printf_line->fd);
	fclose(r->ft_printf_ret->fd);
	fclose(r->source_code->fd);
	fclose(fails);
	print_result();
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
