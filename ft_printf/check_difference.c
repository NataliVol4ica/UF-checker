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

void	print_fail(FILE *fails, t_read_lines *r)
{
	printf("=============\\\n");
	printf("Fail test : %s\n", &r->source_code->str[11]);
	printf("Your str : \"%s\"\n", r->ft_printf_line->str);
	printf("Corr str : \"%s\"\n", r->printf_line->str);
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
		if ((strcmp(r->printf_line->str, r->ft_printf_line->str) != 0 ||
			strcmp(r->printf_ret->str, r->ft_printf_ret->str) != 0) &&
			!(strcmp(r->printf_ret->str, "-1") == 0))
		{
			while (curcode < curtest)
			{
				read_delim(r->source_code, '@');
				curcode++;
			}
			skip_read_line(r->source_code, 5);
			print_fail(fails, r);
			read_delim(r->source_code, '@');
			total.num_of_fails++;
			exit (0);
		}
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
