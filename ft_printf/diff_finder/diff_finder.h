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

# include <stdio.h>

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

enum m_types
{
	td = 0, tD, ti, to, tO, tu, tU, tx, tX, tc, tC, ts, tS, tp, tperc //15
};

enum b_types
{
	te = 0, tE, tf, tF, ta, tA, tg, tG, tn //9
};

enum lens
{
	lnone = 0, lhh, lh, ll, lll, lj, lz, lL, lt //9
};

typedef struct	s_result
{
	size_t	main_vals[15][9];
	size_t	bon_vals[9][9];
}				t_result;

t_result		result;
int				as_you_wish;


char			*ft_strdup(const char *str);
char			*ft_strjoin(char const *s1, char const *s2);
void			read_params(t_line *line, t_params *p);
void			print_params(t_params *p);
void			skip_lines(t_line *line, int n);
void			print_error(FILE *f, t_params *p, t_read_lines *r);
void			print_error2(t_params *p, t_read_lines *r);
int				r_getline(t_line *line);
void			save_fail(char *str);

t_read_lines	*new_read_lines(void);

#endif
