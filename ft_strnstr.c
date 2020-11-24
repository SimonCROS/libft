/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:32:07 by scros             #+#    #+#             */
/*   Updated: 2020/11/24 09:36:52 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nlen;
	size_t	i;
	size_t	max;
	char	*poi;

	poi = (char*)haystack;
	nlen = ft_strlen(needle);
	if (nlen > ft_strlen(haystack))
		return (0);
	max = len - nlen;
	if (max > len)
		max = len;
	i = 0;
	while (i <= max && poi[i])
	{
		if (!ft_strncmp(poi + i, needle, nlen))
			return (poi + i);
		++i;
	}
	return (0);
}
