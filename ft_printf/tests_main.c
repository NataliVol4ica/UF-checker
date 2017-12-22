/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_main.c                                       :+:      :+:    :+:   */
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
#include <limits.h>

int		main(void)
{	
	testing_percent(0, 0, 0);
	testing_percent(2, 0, 0);
	testing_percent(6, 5, 0);

	testing_diouxbx(0, 0, 0);
	testing_diouxbx(0, 4, 0);
	testing_diouxbx(5, 3, 25);
	testing_diouxbx(5, 0, 25);
	testing_diouxbx(5, 1, 25);
	testing_diouxbx(5, 4, -25);
	testing_diouxbx(5, 3, -25);
	testing_diouxbx(4, 3, -25);
	testing_diouxbx(13, 12, -2147483648);
	testing_diouxbx(13, 12, 2147483648);
	testing_diouxbx(13, 12, 2147483647);

	testing_cbc(0, 0, 'v');
	testing_cbc(0, -1, 'v');
	testing_cbc(2, -1, 128);
	testing_cbc(2, -1, L'α');
	testing_cbc(2, -1, L'我');
	setlocale(LC_ALL, "en_US.UTF-8");
	testing_cbc(2, -1, 128); 
	testing_cbc(2, -1, L'α');
	testing_cbc(2, -1, L'我');

	testing_sbs(0, 0, L"");
	testing_sbs(0, -1, L"");
	testing_sbs(0, 5, L"");
	testing_sbs(2, 1, L"");
	testing_sbs(2, 0, L"");
	testing_sbs(30, 20, L"casual string");
	testing_sbs(10, 0, L"casual string");
	testing_sbs(10, 20, L"casual string");
	testing_sbs(13, 12, L"casual string");
	testing_sbs(20, -1, L"我是一只猫。");
	testing_sbs(30, -1, L"我是一只猫。");

	testing_bdbobu(0, 0, 0);
	testing_bdbobu(0, -1, 0);
	testing_bdbobu(0, 4, 0);
	testing_bdbobu(5, 3, 25);
	testing_bdbobu(5, 0, 25);
	testing_bdbobu(5, 1, 25);
	testing_bdbobu(5, 4, -25);
	testing_bdbobu(-5, 3, -25);
	testing_bdbobu(-4, 3, -25);
	testing_bdbobu(-13, 12, -2147483648);
	testing_bdbobu(-13, 12, 2147483648);
	testing_bdbobu(-13, 12, 2147483647);

	int		num = 256;
	void	*p = &num;
	testing_p(0, 0, NULL);
	testing_p(0, 1, NULL);
	testing_p(1, 0, NULL);
	testing_p(5, 4, NULL);
	testing_p(0, 0, p);
	testing_p(0, 1, p);
	testing_p(1, 0, p);
	testing_p(5, 4, p);
	return (0);
}
