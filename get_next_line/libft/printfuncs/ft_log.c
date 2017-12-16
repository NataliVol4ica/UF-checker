/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_log.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkolosov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 21:38:58 by nkolosov          #+#    #+#             */
/*   Updated: 2017/11/08 21:38:58 by nkolosov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_log(char l, char *str, void (*f)(char *))
{
	if (l != 0)
	{
		ft_putstr("[LOG] ");
		(*f)(str);
	}
}
