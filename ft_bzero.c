/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 16:21:17 by scros             #+#    #+#             */
/*   Updated: 2020/11/30 10:40:42 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t cur;

	while (n)
	{
		if (n >= sizeof(long))
		{
			cur = sizeof(long);
			*((long*)s) = 0;
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
