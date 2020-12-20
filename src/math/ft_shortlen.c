/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shortlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 17:09:09 by scros             #+#    #+#             */
/*   Updated: 2020/12/20 17:24:58 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_shortlen(short n)
{
	if (n == -32768)
		return (6);
	if (n < 0)
		return (1 + ft_shortlen(-n));
	if (n < 10)
		return (1);
	return (1 + ft_shortlen(n / 10));
}

int	ft_ushortlen(unsigned short n)
{
	if (n < 10)
		return (1);
	return (1 + ft_ushortlen(n / 10));
}

int	ft_shortlen_hex(unsigned short n, int prefix)
{
	if (prefix)
		return (2 + ft_shortlen_hex(n / 16, 0));
	if (n < 16)
		return (1);
	return (1 + ft_shortlen_hex(n / 16, 0));
}
