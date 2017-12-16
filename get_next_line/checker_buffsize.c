/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_buffsize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkolosov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 16:58:32 by nkolosov          #+#    #+#             */
/*   Updated: 2017/11/25 16:58:33 by nkolosov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "get_next_line.h"
#include "libft.h"

char	*ccb(char *str)
{
	int	i;
	int	br;

	br = 0;
	if (str)
	{
		i = 0;
		while (str[i] && str[i] != '(')
			i++;
		br++;
		if (str[i])
			while (str[i++])
			{
				if (str[i] == '(')
					br++;
				else if (str[i] == ')')
					br--;
				if (br == 0)
					return ((char*)(str + i));
			}
	}
	return (0);
}

int		check_candidate(char *buf, char *buf_size)
{
	printf("Candidate bufer %s buffsize %s\n",buf, buf_size);
	return (1);
}

int		main()
{
	char	*ans;
	char	*temp;
	char	*t2;
	char	*cut;
	char	*res;
	char	**split;
	char	*bs_const;
	char	*buf_name;
	int		is_caps;
	int		i;
	int		c;
	int		fd;
	
	ans = NULL;
	c = 1;
	fd = open("get_next_line.c", O_RDONLY);
	while ((c = get_next_line(fd, &ans) > 0))
	{
		temp = ans;
		if ((cut = ft_strstr(temp, "read ")) || (cut = ft_strstr(temp, "read(")))
		{
			if (!(ccb(cut)))
				while ((c = get_next_line(fd, &ans) > 0))
				{
					t2 = ft_strjoin(cut, ans);
					cut = t2;
					if ((ccb(cut)))
						break;
				}
			res = ft_strdupab(cut, 0, ft_strlen(cut) - ft_strlen(ccb(cut)));
			printf("Line containing read: %s\n", res);
			res[ft_strlen(res)] = '\0';
			i = 0;
			while (res[i] && res[i] != '(')
				i++;
			res = &res[i];
			split = ft_strsplit(res, ',');
			ft_print_word_tab(split);
			i = -1;
			is_caps = 1;
			while (is_caps && split[2][++i])
			{
				if (ft_islower(split[2][i]))
					is_caps = 0;
				if (ft_isupper(split[2][i]))
					is_caps++;
			}
			if (is_caps > 1)
			{
				split[1] = ft_strtrim(split[1]);
				split[2] = ft_strtrim(split[2]);
				check_candidate(split[1], split[2]);
			}
		}
	}
	close(fd);
	return (0);
}
