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
#include <unistd.h>
#include <fcntl.h>
#include "get_next_line.h"
#include "libft.h"

int		main()
{
	char	*ans;
	int		c;
	int		fd;
	int		staticvars;
	int		nofbr;
	int		line;

	ans = NULL;
	c = 1;
	line = 0;
	staticvars = 0;
	fd = open("get_next_line.c", O_RDONLY);
	nofbr = 0;
	while ((c = get_next_line(fd, &ans) > 0))
	{
		line++;
		if ((ft_strstr(ans, "static")) && ans[ft_strlen(ans) - 1] == ';')
		staticvars++;
		if (ans[0] == '{')
			nofbr++;
		if (nofbr == 0 && ans[ft_strlen(ans) - 1] != ';' && 
			!(ft_strstr(ans, "get_next_line")) && !(ft_strstr(ans, "static")) &&
			ft_strstr(ans, "("))
		printf("\x1b[31m""Additional function is not static. ""\x1b[0m""Line [%d]:\n%s\n\n", line, ans);
		if (ans[0] == '}')
			nofbr--;
	}
	if (staticvars == 1)
		printf("\x1b[32m""Number of static variables : %d\n""\x1b[0m", staticvars);
	else
		printf("\x1b[34m""Number of static variables : %d\n""\x1b[0m", staticvars);
	close(fd);
	return (0);
}
