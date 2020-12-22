/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_longlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 17:09:09 by scros             #+#    #+#             */
/*   Updated: 2020/12/22 11:41:05 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_longlen(long n)
{
	if (n < 0 && n - 1 > 0)
		return (20);
	if (n < 0)
		return (1 + ft_longlen(-n));
	if (n < 10)
		return (1);
	return (1 + ft_longlen(n / 10));
}

int	ft_ulonglen(unsigned long n)
{
	if (n < 10)
		return (1);
	return (1 + ft_ulonglen(n / 10));
}

int	ft_longlen_hex(unsigned long n, int prefix, int width)
{
	if (width)
		return (ft_max(width + (!!prefix * 2), ft_longlen_hex(n / 16, 0, 0)));
	if (prefix)
		return (3 + ft_longlen_hex(n / 16, 0, 0));
	if (n < 16)
		return (1);
	return (1 + ft_longlen_hex(n / 16, 0, 0));
}

int	ft_longlen_octal(unsigned long n)
{
	if (n < 8)
		return (1);
	return (1 + ft_longlen_octal(n / 8));
}
