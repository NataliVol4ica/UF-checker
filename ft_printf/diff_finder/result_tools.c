/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   result_tools.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkolosov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 14:31:38 by nkolosov          #+#    #+#             */
/*   Updated: 2017/12/20 14:31:38 by nkolosov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "diff_finder.h"
#include <stdio.h>
#include <libc.h>

void			zero_result(void)
{
	for (enum lens l = lhh; l <= lt; l++)
	{
		for (enum m_types t = td; t <= tperc; t++)
			result.main_vals[t][l] = 0;
		for (enum b_types t = te; t <= tn; t++)
			result.bon_vals[t][l] = 0;
	}
}

//============= FAIL HANDLING =============\\

size_t			get_len_ind(char *str)
{
	size_t	len;

	len = strlen(str);
	if (str[len - 5] == '*') return (0);
	if (str[len - 5] == 'h' && str[len - 6] - 'h' ) return (1);
	if (str[len - 5] == 'h') return (2);
	if (str[len - 5] == 'l' && str[len - 6] - 'l' ) return (4);
	if (str[len - 5] == 'l') return (3);
	if (str[len - 5] == 'j') return (5);
	if (str[len - 5] == 'z') return (6);
	if (str[len - 5] == 'L') return (7);
	if (str[len - 5] == 't') return (8);
	return (9);
}

void			save_fail_bonus(char *str, char t)
{
	size_t	type_index;

	if (t == 'e') type_index = te; else
	if (t == 'E') type_index = tE; else
	if (t == 'f') type_index = tf; else
	if (t == 'F') type_index = tF; else
	if (t == 'a') type_index = ta; else
	if (t == 'A') type_index = tA; else
	if (t == 'g') type_index = tg; else
	if (t == 'G') type_index = tG; else
	if (t == 'n') type_index = tn;
	result.bon_vals[type_index][get_len_ind(str)]++;
}

void			save_fail(char *str)
{
	char	t;
	size_t	type_index;

	t = str[strlen(str) - 4];
	if (t == 'd') type_index = td; else
	if (t == 'D') type_index = tD; else
	if (t == 'i') type_index = ti; else
	if (t == 'o') type_index = to; else
	if (t == 'O') type_index = tO; else
	if (t == 'u') type_index = tu; else
	if (t == 'U') type_index = tU; else
	if (t == 'x') type_index = tx; else
	if (t == 'X') type_index = tX; else
	if (t == 'c') type_index = tc; else
	if (t == 'C') type_index = tC; else
	if (t == 's') type_index = ts; else
	if (t == 'S') type_index = tS; else
	if (t == 'p') type_index = tp; else
	if (t == '%') type_index = tperc; else
	{
		save_fail_bonus(str, t);
		return ;
	}
	result.main_vals[type_index][get_len_ind(str)]++;
}

//============ RESULT PRINTING =============\\

void			print_red(char *str)
{
	printf("\x1b[31m""%s""\x1b[0m", str);
}

void			print_green(char *str)
{
	printf("\x1b[32m""%s""\x1b[0m", str);
}

void			choose_color(char *str, size_t val)
{
	if (val == 0)
		print_green(str);
	else
		print_red(str);
}

char			*get_len_word(enum lens l)
{
	if (l == lnone) return ("-"); else
	if (l == lhh) return ("hh"); else
	if (l == lh) return ("h"); else
	if (l == ll) return ("l"); else
	if (l == lll) return ("ll"); else
	if (l == lj) return ("j"); else
	if (l == lz) return ("z"); else
	if (l == lL) return ("L"); else
	return ("t");
}

void			print_m_res(enum m_types t)
{
	size_t fails = 0;

	printf("   %%");
	if (t == td) printf("d"); else
	if (t == tD) printf("D"); else
	if (t == ti) printf("i"); else
	if (t == to) printf("o"); else
	if (t == tO) printf("O"); else
	if (t == tu) printf("u"); else
	if (t == tU) printf("U"); else
	if (t == tx) printf("x"); else
	if (t == tX) printf("X"); else
	if (t == tc) printf("c"); else
	if (t == tC) printf("C"); else
	if (t == ts) printf("s"); else
	if (t == tS) printf("S"); else
	if (t == tp) printf("p"); else
	if (t == tperc) printf("%%");
	printf(" : [");
	for (enum lens l = lnone; l <= lt; l++)
	{
		choose_color(get_len_word(l), result.main_vals[t][l]);
		fails += result.main_vals[t][l];
		if (l != lt) printf("|");
	}
	printf("]");
	if (fails)
		printf("\x1b[31m"" Fails : %d""\x1b[0m", fails);
	printf("\n");
}

void			print_b_res(enum b_types t)
{
	size_t fails = 0;

	printf("   %%");
	if (t == te) printf("e"); else
	if (t == tE) printf("E"); else
	if (t == tf) printf("f"); else
	if (t == tF) printf("F"); else
	if (t == ta) printf("a"); else
	if (t == tA) printf("A"); else
	if (t == tg) printf("g"); else
	if (t == tG) printf("G"); else
	if (t == tn) printf("n");
	printf(" : [");
	for (enum lens l = lnone; l <= lt; l++)
	{
		choose_color(get_len_word(l), result.bon_vals[t][l]);
		fails += result.bon_vals[t][l];
		if (l != lt) printf("|");
	}
	printf("]");
	if (fails)
		printf("\x1b[31m"" Fails : %d""\x1b[0m", fails);
	printf("\n");
}

void			print_result(int is_bonus)
{
	for (enum m_types t = td; t <= tperc; t++)
		print_m_res(t);
	if (!is_bonus)
		return ;
	printf("\n");
	for (enum b_types t = td; t <= tn; t++)
		print_b_res(t);
	printf("|============================|\n");
}
