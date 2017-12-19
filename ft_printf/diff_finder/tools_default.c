/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_default.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkolosov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 18:04:09 by nkolosov          #+#    #+#             */
/*   Updated: 2017/12/19 18:04:09 by nkolosov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	char	*ans;
	int		strl;
	int		i;

	if (!str)
		return (NULL);
	strl = 0;
	while (str[strl])
		strl++;
	ans = (char*)malloc(sizeof(char) * (strl + 1));
	if (!ans)
		return (ans);
	i = -1;
	while (++i < strl)
		ans[i] = str[i];
	ans[strl] = '\0';
	return (ans);
}

size_t		ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strnew(size_t size)
{
	char	*str;

	str = (char*)malloc(sizeof(char) * (size + 1));
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		j;

	res = ft_strnew(ft_strlen((char*)s1) + ft_strlen((char*)s2));
	if (!res)
		return (NULL);
	i = -1;
	j = -1;
	if (s1)
		while (s1[++i])
			res[i] = s1[i];
	else
		i = 0;
	if (s2)
		while (s2[++j])
			res[i + j] = s2[j];
	else
		j = 0;
	res[i + j] = '\0';
	return (res);
}
