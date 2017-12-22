
#ifndef STRUCTS_H
# define STRUCTS_H

# include <stdio.h>

typedef struct	s_line
{
	char	*filename;
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

typedef struct		s_list
{
	char			*str;
	struct s_list	*next;
}					t_list;

typedef struct	s_test
{
	char	*name;
	FILE	*fd;
	char	*fdname;
	char	*n;
	char	*flags;
	size_t	numof_flags;
	size_t	numof_flagcombinations;
	char	*width;
	char	*precision;
	char	**lengthes;
	size_t	numof_lengthes;
	char	*types;
	size_t	numof_types;
	char	*args;
	char	*extra_code;
	char	*extra_print;
	//
	char	flagmass[6];
	char	type;
	char	*length;
	size_t	testnum;
}				t_test;

typedef struct	s_curtest
{
}				t_curtest;

#endif
