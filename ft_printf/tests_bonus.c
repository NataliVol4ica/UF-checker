/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_bonus.c                                      :+:      :+:    :+:   */
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
	testing_apostrophe_numeric(0, 0, 0);
	setlocale(LC_ALL, "en_US.UTF-8");
	testing_apostrophe_numeric(0, 0, 0);
	testing_apostrophe_numeric(0, 0, 1024);
	return (0);
}
