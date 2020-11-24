/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 16:36:39 by scros             #+#    #+#             */
/*   Updated: 2020/11/24 18:14:03 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	needle;
	unsigned char	*sstr;
	unsigned char	*dstr;

	i = 0;
	needle = c;
	sstr = (unsigned char*)src;
	dstr = dst;
	if (!dst && !src)
		return (dst);
	while (i < n)
	{
		dstr[i] = sstr[i];
		if (dstr[i] == needle)
			return (dst + i + 1);
		++i;
	}
	return (0);
}
