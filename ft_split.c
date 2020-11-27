/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:12:45 by scros             #+#    #+#             */
/*   Updated: 2020/11/27 10:21:54 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*free_all(char **obj, int len)
{
	while (len--)
	{
		free(*obj);
		obj++;
	}
	free(obj);
	return (NULL);
}

static int	ft_init(const char *s, char c)
{
	int i;
	int j;

	i = 0;
	if (s[0] == c)
		j = -1;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			i++;
		++j;
		while (s[i] && s[i] == c)
			i++;
	}
	return (j);
}

char		**ft_split(const char *s, char c)
{
	int		i;
	char	*newstr;
	char	**output;

	if (!s || !(output = ft_calloc(ft_init(s, c) + 1, sizeof(*output))))
		return (NULL);
	i = 0;
	while (*s)
	{
		newstr = ft_strchr(s, c);
		if (!newstr)
			newstr = ft_strchr(s, 0);
		if (newstr - s)
		{
			if (!(output[i] = ft_substr(s, 0, newstr - s)))
				return (free_all(output, i));
			s = newstr;
			i++;
		}
		else
			s++;
	}
	output[i] = 0;
	return (output);
}
