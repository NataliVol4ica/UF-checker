/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_tools.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkolosov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 18:05:25 by nkolosov          #+#    #+#             */
/*   Updated: 2017/12/19 18:05:25 by nkolosov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "diff_finder.h"
#include <stdio.h>

t_read_lines	*new_read_lines(void)
{
	t_read_lines	*r;

	r = (t_read_lines*)malloc(sizeof(t_read_lines));
	if (!r)
	{
		printf("Malloc ERROR\n");
		return (NULL);
	}
	r->printf_line = (t_line*)malloc(sizeof(t_line));
	r->printf_line->str = (char*)malloc(sizeof(char) * 1024);
	r->printf_line->len = 0;
	r->printf_line->fd = fopen("./files/printf_res", "r");
	r->printf_ret = (t_line*)malloc(sizeof(t_line));
	r->printf_ret->str = (char*)malloc(sizeof(char) * 1024);
	r->printf_ret->len = 0;
	r->printf_ret->fd = fopen("./files/printf_ret", "r");
	r->ft_printf_line = (t_line*)malloc(sizeof(t_line));
	r->ft_printf_line->str = (char*)malloc(sizeof(char) * 1024);
	r->ft_printf_line->len = 0;
	r->ft_printf_line->fd = fopen("./files/ft_printf_res", "r");
	r->ft_printf_ret = (t_line*)malloc(sizeof(t_line));
	r->ft_printf_ret->str = (char*)malloc(sizeof(char) * 1024);
	r->ft_printf_ret->len = 0;
	r->ft_printf_ret->fd = fopen("./files/ft_printf_ret", "r");
	r->source_code = (t_line*)malloc(sizeof(t_line));
	r->source_code->str = (char*)malloc(sizeof(char) * 1024);
	r->source_code->len = 0;
	r->source_code->fd = fopen("./files/ft_printf_ret", "r"); //чтоб потом закрыть
	setvbuf(r->printf_line->fd, NULL, _IONBF, 0);
	setvbuf(r->printf_ret->fd, NULL, _IONBF, 0);
	setvbuf(r->ft_printf_line->fd, NULL, _IONBF, 0);
	setvbuf(r->ft_printf_ret->fd, NULL, _IONBF, 0);
	setvbuf(r->source_code->fd, NULL, _IONBF, 0);
	return (r);
}

void	read_params(t_line *line, t_params *p)
{
	r_getline(line);
	p->codefile = ft_strdup(&line->str[7]);
	r_getline(line);
	p->num_of_tests = atoi(&line->str[8]);
	r_getline(line);
	p->width = ft_strdup(&line->str[8]);
	r_getline(line);
	p->precision = ft_strdup(&(line->str[12]));
	r_getline(line);
	p->var = ft_strdup(&line->str[6]);
	r_getline(line);
	p->locale = ft_strdup(&line->str[9]);
	r_getline(line); //empty str
	r_getline(line); //getting next;
}

void	write_params(t_params *p)
{
	printf("Code file = \"%s\"\n", p->codefile);
	printf("Num of tests = %zu\n", p->num_of_tests);
	printf("Width = \"%s\"\n", p->width);
	printf("Precision = \"%s\"\n", p->precision);
	printf("Var = \"%s\"\n", p->var);
}
