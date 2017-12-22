
#include "tools.h"
#include <stdlib.h>

char	*get_test_name(int n, int ismain)
{
	char	*ans;
	char	*type;
	char	*num;
	char	*temp;

	num = ft_strnew(2);
	type = ft_strnew(1);
	num[0] = n / 10 + '0';
	num[1] = n % 10 + '0';
	type[0] = ismain ? 'm' : 'b';
	temp = ft_strjoin("./files/test_", type);
	free(type);
	ans = ft_strjoin(temp, num);
	free(num);
	free(temp);
	temp = ans;
	ans = ft_strjoin(temp, "_");
	free(temp);
	return (ans);
}

t_read_lines	*new_differ_test(char *name)
{
	t_read_lines	*r;
	char			*fname;

	if (!(r = (t_read_lines*)malloc(sizeof(t_read_lines)))) bad_malloc();
	fname = ft_strjoin(name, P_PRINT);
	r->printf_line = new_readline(fname, "r");
	free(fname);
	fname = ft_strjoin(name, P_RET);
	r->printf_ret = new_readline(fname, "r");
	free(fname);
	fname = ft_strjoin(name, F_PRINT);
	r->ft_printf_line = new_readline(fname, "r");
	free(fname);
	fname = ft_strjoin(name, F_RET);
	r->ft_printf_ret = new_readline(fname, "r");
	free(fname);
	free(name);
	return (r);
}
