/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 16:21:17 by scros             #+#    #+#             */
/*   Updated: 2020/11/25 19:10:00 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t cur;

	while (n)
	{
		if (n >= sizeof(__int128_t))
		{
			cur = sizeof(__int128_t);
			*((__int128_t*)s) = 0;
		}
		else if (n >= sizeof(long long))
		{
			cur = sizeof(long long);
			*((long long*)s) = 0;
		}
		else
		{
			cur = 1;
			*((char*)s) = 0;
		}
		s += cur;
		n -= cur;
	}
}
