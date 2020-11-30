/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 11:52:00 by scros             #+#    #+#             */
/*   Updated: 2020/11/30 10:40:31 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	n[sizeof(long)];
	unsigned char	*str;
	size_t			i;

	str = b;
	i = 0;
	while (i < sizeof(long))
		n[i++] = c;
	while (len)
	{
		if (len >= sizeof(long))
		{
			len -= sizeof(long);
			*(long*)str = *(long*)n;
			str += sizeof(long);
		}
		else
		{
			*(str++) = c;
			len--;
		}
	}
	return (b);
}
