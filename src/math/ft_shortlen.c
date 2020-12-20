/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shortlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 17:09:09 by scros             #+#    #+#             */
/*   Updated: 2020/12/20 16:24:50 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_shortlen(short n)
{
	if (n < 0 && n - 1 > 0)
		return (20);
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

int	ft_shortlen_hex(unsigned short n)
{
	if (n < 16)
		return (1);
	return (1 + ft_shortlen_hex(n / 16));
}
