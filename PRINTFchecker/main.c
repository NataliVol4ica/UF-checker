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

void		signed_number_testing(int width, int precision, intmax_t number);

int		main(void)
{
	/*FILE	*fp1;

	fp1 = fopen("./files/print_res", "a");
	fprintf(fp1, "test\n");
	fclose(fp1);*/
	signed_number_testing(0, -1, 0);
	signed_number_testing(5, 3, 25);
	signed_number_testing(5, 4, -25);
	signed_number_testing(-5, 3, -25);
	return (0);
}
