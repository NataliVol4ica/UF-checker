/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   diff_finder.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkolosov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 16:05:44 by nkolosov          #+#    #+#             */
/*   Updated: 2017/12/15 16:05:44 by nkolosov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIFF_FINDER_H
# define DIFF_FINDER_H

int		as_you_wish;

typedef struct	s_params
{
	char	*locale;
	char	*codefile;
	char	*width;
	char	*precision;
	char	*var;
	size_t	num_of_tests;
}				t_params;

typedef struct	s_line
{
	char	*str;
	char	len;
	FILE	*fd;
}				t_line;

typedef struct	s_read_lines
{
	t_line		*printf_line;
	t_line		*printf_ret;
	t_line		*ft_printf_line;
	t_line		*ft_printf_ret;
	t_line		*source_code;
}				t_read_lines;

typedef struct	s_lengthes
{
	_Bool		hh : 0;
	_Bool		h : 0;
	_Bool		l : 0;
	_Bool		ll : 0;
	_Bool		j : 0;
	_Bool		z : 0;
	_Bool		t : 0;
	_Bool		L : 0;
}				t_lengthes;

typedef struct	s_result
{
	t_lengthes	*d;
	t_lengthes	*d;
	t_lengthes	*d;
	t_lengthes	*d;
	t_lengthes	*d;
	t_lengthes	*d;
	t_lengthes	*d;
	t_lengthes	*d;
	t_lengthes	*d;
	t_lengthes	*d;
	t_lengthes	*d;
	t_lengthes	*d;
	t_lengthes	*d;
	t_lengthes	*d;
	t_lengthes	*d;
}				t_result;

char			*ft_strdup(const char *str);
char			ft_strjoin(char const *s1, char const *s2);
void			read_params(t_line *line, t_params *p);
void			write_params(t_params *p);
void			skip_lines(t_line *line, int n);
void			print_error(t_params *p, t_read_lines *r);
void			print_error2(t_params *p, t_read_lines *r);
int				r_getline(t_line *line);

t_read_lines	*new_read_lines(void);

#endif
