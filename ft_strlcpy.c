/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 11:24:58 by scros             #+#    #+#             */
/*   Updated: 2020/11/24 12:00:37 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	i = 0;
	while (i < dstsize - 1 && src[i])
	{
		if (dstsize > 0)
			dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = 0;
	while (src[i])
		i++;
	return (i);
}
