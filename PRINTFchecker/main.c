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

	signed_number_testing(&n, 0, 0, 0);
	signed_number_testing(&n, 0, -1, 0);
	signed_number_testing(&n, 0, 4, 0);
	signed_number_testing(&n, 5, 3, 25);
	signed_number_testing(&n, 5, 4, -25);
	signed_number_testing(&n, -5, 3, -25);
	signed_number_testing(&n, -13, 12, -2147483648);
	signed_number_testing(&n, -13, 12, 2147483648);
	
	unsigned_number_testing(&n, 0, 0, 0);
	unsigned_number_testing(&n, 0, -1, 0);
	unsigned_number_testing(&n, 5, 3, 25);
	unsigned_number_testing(&n, 5, 3, -25);
	return (0);
}
