/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkolosov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 15:34:27 by nkolosov          #+#    #+#             */
/*   Updated: 2017/11/23 15:34:28 by nkolosov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "get_next_line.h"
#include "libft.h"

// "drwx resources", "Makefile", "lib_cleanlog", "lib_makelog", "get_next_line.o" "files"
// "get_next_line.c", "get_next_line.h", "author", "drwx libft" 

void	print_green(char *str)
{
	printf("\x1b[32m""%s\n""\x1b[0m", str);
}

void	print_red(char *str)
{
	printf("\x1b[31m""%s\n""\x1b[0m", str);
}

int		main()
{
	char	**prog_files;
	char	**check_files;
	char	*ans;
	int		c;
	int		fd;	
	int		line;
	int		i;
	int		f;

	prog_files = (char**)malloc(sizeof(char*) * 4);
	prog_files[3] = NULL;
	prog_files[0] = "get_next_line.c";
	prog_files[1] = "get_next_line.h";
	prog_files[2] = "author";
	check_files = (char**)malloc(sizeof(char*) * 6);
	check_files[5] = NULL;
	check_files[0] = "Makefile";
	check_files[1] = "lib_cleanlog";
	check_files[2] = "lib_makelog";
	check_files[3] = "get_next_line.o";
	check_files[4] = "files";
	ans = NULL;
	c = 1;
	line = 0;
	fd = open("files", O_RDONLY);
	if (fd <= 0)
		exit (1);
	while ((c = get_next_line(fd, &ans) > 0))
		if (++line > 1)
		{
			if (ft_strstr(ans, "resources") && ft_strstr(ans, "drwx"))
				continue;
			if (ft_strstr(ans, "libft") && ft_strstr(ans, "drwx"))
			{
				print_green(ans);
				continue;
			}
			i = -1;
			f = 1;
			while(f && prog_files[++i])
				if (ft_strstr(ans, prog_files[i]))
				{
					f = 0;
					print_green(ans);
				}
			if (!f)
				continue;
			i = -1;
			f = 1;
			while(f && check_files[++i])
				if (ft_strstr(ans, check_files[i]))
					f = 0;
			if (!f)
				continue;
			print_red(ans);
		}
	close(fd);
	return (0);
}
