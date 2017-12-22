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

int		main(int ac, char **av)
{
	size_t	num_of_main_tests;
	size_t	num_of_bonus_tests;

	if (ac != 3)
		return (1);
	num_of_main_tests = atoi(av[1]);
	num_of_bonus_tests = atoi(av[2]);
	return (0);
}
