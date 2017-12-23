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
#include "tools.h"

#define MAINTYPES "dDioOuUxXcCsSp%" //15
#define BONUSTYPES "eEfFaAgGn" //9

void	save_test(char *str, int is_fail)
{
	size_t	i;
	size_t	len;

	while (str[0] != '|')
		str++;
	str++;
	i = 1;
	while (str[i] != '|')
		i++;
	str[i] = '\0';
	i -= 2;
	printf("fail inp %s\n", str);
	if (str[i] == 'h' && str[i - 1] == 'h' ) len = lhh; else
	if (str[i] == 'h') len = lh; else
	if (str[i] == 'l' && str[i - 1] == 'l' ) len = lll; else
	if (str[i]  == 'l') len = ll; else
	if (str[i] == 'j') len = lj; else
	if (str[i] == 'z') len = lz; else
	if (str[i] == 'L') len = lL; else
	if (str[i] == 't') len = lt; else
	len = lnone;
	i++;
	for (size_t typ = 0; typ < tmmax; typ++)
		if (str[i] == MAINTYPES[typ])
		{
			if (is_fail)
				result.main_values[typ][len].num_of_fails++;
			result.main_values[typ][len].num_of_tests++;
			return ;
		}
	for (size_t typ = 0; typ < tbmax; typ++)
		if (str[i] == MAINTYPES[typ])
		{
			if (is_fail)
				result.bonus_values[typ][len].num_of_fails++;
			result.bonus_values[typ][len].num_of_tests++;
			return ;
	}
}

void	print_fail(FILE *fails, t_read_lines *r)
{
	printf("=============\\\n");
	r->printf_line->str[5] = '\0';
	printf("Fail test %s : %s\n", r->printf_line->str, &r->source_code->str[11]);
	r->printf_line->str[5] = '|';
	printf("Your str : \"%s\"\n", &r->ft_printf_line->str[5]);
	printf("Corr str : \"%s\"\n", &r->printf_line->str[5]);
	printf("Your ret : \"%s\"\n", r->ft_printf_ret->str);
	printf("Corr ret : \"%s\"\n", r->printf_ret->str);
	printf("Test name: %s\n", r->source_code->filename);
}

void	check_file(t_read_lines *r, FILE *fails)
{
	size_t	curtest = 0;
	size_t	curcode = 0;

	read_delim(r->source_code, '@');
	while (read_line(r->printf_line))
	{
		total.num_of_tests++;
		read_line(r->ft_printf_line);
		if (r->printf_line->len == 1)
			continue ;
		read_line(r->printf_ret);
		read_line(r->ft_printf_ret);
		skip_read_line(r->source_code, 5);
		if ((strcmp(r->printf_line->str, r->ft_printf_line->str) != 0 ||
			strcmp(r->printf_ret->str, r->ft_printf_ret->str) != 0) &&
			!(strcmp(r->printf_ret->str, "-1") == 0))
		{
			save_test(r->source_code->str, 1);
			print_fail(fails, r);
			total.num_of_fails++;
		}
		else
			save_test(r->source_code->str, 0);
		read_delim(r->source_code, '@');
		curtest++;
	}
}

int		main(int ac, char **av)
{
	size_t			num_of_main_tests;
	size_t			num_of_bonus_tests;
	t_read_lines	*r;
	FILE			*fails;

	if (ac != 3)
		return (1);
	fflush(stdout);
	total.num_of_tests = 0;
	total.num_of_fails = 0;
	num_of_main_tests = atoi(av[1]);
	num_of_bonus_tests = atoi(av[2]);
	zero_result();
	fails = fopen("../fails", "w");
	setvbuf(fails, NULL, _IONBF, 0);
	for(int i = 0; i < num_of_main_tests; i++)
	{
		r = new_differ_test(get_test_name(i, 1), get_code_name(i, 1));
		check_file(r, fails);
		close_differ_test(r);
	}
	printf("\n=== \\\\ Main results:\n");
	print_result(0);
	zero_result();
	//same cycle for bonus
	printf("\n=== \\\\ Bonus results:\n");
	print_result(1);
	printf("Total number of tests: %zu\n", total.num_of_tests);
	printf("Total number of fails: %zu\n", total.num_of_fails);
	fclose(fails);
	return (0);
}
