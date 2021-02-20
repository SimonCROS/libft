/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:57:55 by scros             #+#    #+#             */
/*   Updated: 2020/11/26 11:03:11 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cp;

	cp = (unsigned char*)s;
	c = (unsigned char)c;
	while (n--)
	{
		if (*cp == c)
			return (cp);
		++cp;
	}
	return (NULL);
}
