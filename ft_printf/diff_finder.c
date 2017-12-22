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

int		main(int ac, char **av)
{
	size_t			num_of_main_tests;
	size_t			num_of_bonus_tests;
	t_read_lines	*r;

	if (ac != 3)
		return (1);
	num_of_main_tests = atoi(av[1]);
	num_of_bonus_tests = atoi(av[2]);
	for(int i = 0; i < num_of_main_tests; i++)
	{
		r = new_differ_test(get_test_name(i, 1));
		//do the reading
		close_differ_test(r);
	}
	//print result with main param
	//same cycle for bonus
	//print result with bonus
	return (0);
}
