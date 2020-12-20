/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 17:09:09 by scros             #+#    #+#             */
/*   Updated: 2020/12/20 19:03:52 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_charlen(char n)
{
	if (n == -128)
		return (4);
	if (n < 0)
		return (1 + ft_charlen(-n));
	if (n < 10)
		return (1);
	return (1 + ft_charlen(n / 10));
}

int	ft_ucharlen(unsigned char n)
{
	if (n < 10)
		return (1);
	return (1 + ft_ucharlen(n / 10));
}

int	ft_charlen_hex(unsigned char n, int prefix, int min_width)
{
	if (min_width)
		return (ft_min(min_width + prefix * 2, ft_charlen_hex(n / 16, 0, 0)));
	if (prefix)
		return (3 + ft_charlen_hex(n / 16, 0, 0));
	if (n < 16)
		return (1);
	return (1 + ft_charlen_hex(n / 16, 0, 0));
}
