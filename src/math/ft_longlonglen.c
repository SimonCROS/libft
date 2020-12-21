/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_longlonglen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 17:09:09 by scros             #+#    #+#             */
/*   Updated: 2020/12/21 10:21:50 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_longlonglen(long long n)
{
	if (n < 0 && n - 1 > 0)
		return (20);
	if (n < 0)
		return (1 + ft_longlonglen(-n));
	if (n < 10)
		return (1);
	return (1 + ft_longlonglen(n / 10));
}

int	ft_ulonglonglen(unsigned long long n)
{
	if (n < 10)
		return (1);
	return (1 + ft_ulonglonglen(n / 10));
}

int	ft_longlonglen_hex(unsigned long long n, int pre, int width)
{
	if (width)
		return (ft_max(width + (!!pre * 2), ft_longlonglen_hex(n / 16, 0, 0)));
	if (pre)
		return (3 + ft_longlonglen_hex(n / 16, 0, 0));
	if (n < 16)
		return (1);
	return (1 + ft_longlonglen_hex(n / 16, 0, 0));
}
