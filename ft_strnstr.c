/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:32:07 by scros             #+#    #+#             */
/*   Updated: 2020/11/26 17:57:53 by scros            ###   ########lyon.fr   */
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
			while (haystack[i] == needle[j++] && i++ < len)
				if (!needle[j])
					return (str);
			j = 0;
		}
		else
			i++;
	}
	return (NULL);
}
