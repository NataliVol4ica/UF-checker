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
	setlocale(LC_ALL, "en_US.UTF-8");
	/*int	n = 0;
	struct lconv *loc;

	fflush(stdout);
	
	printf("Locale %s\n", setlocale(LC_CTYPE, "en_US.UTF-8"));
	loc = localeconv();
	printf("Separator %s\n", loc->thousands_sep);
	*/
	/*testing_diouxbx(0, 0, 0);
	testing_diouxbx(0, -1, 0);
	testing_diouxbx(0, 4, 0);
	testing_diouxbx(5, 3, 25);
	testing_diouxbx(5, 0, 25);
	testing_diouxbx(5, 1, 25);
	testing_diouxbx(5, 4, -25);
	testing_diouxbx(-5, 3, -25);
	testing_diouxbx(-4, 3, -25);
	testing_diouxbx(-13, 12, -2147483648);
	testing_diouxbx(-13, 12, 2147483648);
	testing_diouxbx(-13, 12, 2147483647);*/

	testing_cbc(0, 0, 'v');
	return (0);
}
