/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:12:45 by scros             #+#    #+#             */
/*   Updated: 2020/11/25 12:33:03 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	*ft_init_lens(char *s, char c, int len, int **starts)
{
	int *lens;
	int i;
	int j;

	if (!(lens = malloc(len * sizeof(*lens))))
		return (0);
	if (!((*starts) = malloc(len * sizeof(**starts))))
		return (0);
	i = 0;
	j = 0;
	if (s[0] == c)
		j = -1;
	while (s[i])
	{
		lens[j] = 0;
		(*starts)[j] = -1;
		while (s[i] && s[i] != c)
			if (++i && ++lens[j] && (*starts)[j] < 0)
				(*starts)[j] += i;
		++j;
		while (s[i] && s[i] == c)
			i++;
	}
	return (lens);
}

static int	ft_init(char *s, char c)
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

static void	ft_fill(char *s, char **output, int *lens, int *starts)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (i == *starts)
		{
			if (!(output[j] = malloc((*lens + 1) * sizeof(**output))))
				return ;
			while (i++ - *starts < *lens)
				output[j][i - *starts - 1] = s[i - 1];
			output[j][i - *starts - 1] = 0;
			starts++;
			lens++;
			j++;
		}
		else
			i++;
	}
	output[j] = 0;
}

char		**ft_split(const char *s, char c)
{
	int		max;
	int		*starts;
	int		*lens;
	char	**output;

	if (!s)
		return (NULL);
	max = ft_init((char*)s, c) + 1;
	lens = ft_init_lens((char*)s, c, max, &starts);
	if (!(output = malloc(max * sizeof(*output))))
		return (NULL);
	if (max > 1)
		ft_fill((char*)s, output, lens, starts);
	else
		output[0] = 0;
	return (output);
}
