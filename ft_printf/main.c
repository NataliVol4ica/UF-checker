/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkolosov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 16:43:07 by nkolosov          #+#    #+#             */
/*   Updated: 2017/12/13 16:43:07 by nkolosov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdint.h>
#include <stdio.h>
#include <locale.h>

int		main(void)
{
	int	n = 0;

	numeric_testing_diouxbx(&n, 0, 0, 0);
	numeric_testing_diouxbx(&n, 0, -1, 0);
	numeric_testing_diouxbx(&n, 0, 4, 0);
	numeric_testing_diouxbx(&n, 5, 3, 25);
	numeric_testing_diouxbx(&n, 5, 4, -25);
	numeric_testing_diouxbx(&n, -5, 3, -25);
	numeric_testing_diouxbx(&n, -13, 12, -2147483648);
	numeric_testing_diouxbx(&n, -13, 12, 2147483648);

	return (0);
}
