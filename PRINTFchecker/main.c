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

void		signed_number_testing(int width, int precision, intmax_t number);

int		main(void)
{
	signed_number_testing(0, -1, 0);
	return (0);
}
