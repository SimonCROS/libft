/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:32:07 by scros             #+#    #+#             */
/*   Updated: 2020/11/30 09:15:07 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	if (!*needle)
		return ((char*)haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[j])
		{
			str = ((char*)haystack) + i;
			while (haystack[i + j] == needle[j] && i + j < len)
				if (!needle[++j])
					return (str);
			j = 0;
		}
		i++;
	}
	return (NULL);
}
