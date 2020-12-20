/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 17:09:09 by scros             #+#    #+#             */
/*   Updated: 2020/12/20 18:56:02 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	if (n < 0 && n - 1 > 0)
		return (11);
	if (n < 0)
		return (1 + ft_intlen(-n));
	if (n < 10)
		return (1);
	return (1 + ft_intlen(n / 10));
}

int	ft_uintlen(unsigned int n)
{
	if (n < 10)
		return (1);
	return (1 + ft_uintlen(n / 10));
}

int	ft_intlen_hex(unsigned int n, int prefix, int min_width)
{
	if (min_width)
		return (ft_min(min_width, ft_intlen_hex(n / 16, 0, 0)));
	if (prefix)
		return (3 + ft_intlen_hex(n / 16, 0, 0));
	if (n < 16)
		return (1);
	return (1 + ft_intlen_hex(n / 16, 0, 0));
}
