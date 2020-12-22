/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cton.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:26:24 by scros             #+#    #+#             */
/*   Updated: 2020/12/22 11:42:52 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ctoa(char n)
{
	int		len;
	char	*str;

	len = ft_charlen(n) + 1;
	if (!(str = malloc(len)))
		return (NULL);
	str[len] = 0;
	return (ft_ctoa_to(n, str));
}

char	*ft_uctoa(unsigned char n)
{
	int		len;
	char	*str;

	len = ft_charlen(n) + 1;
	if (!(str = malloc(len)))
		return (NULL);
	str[len] = 0;
	return (ft_uctoa_to(n, str));
}

char	*ft_ctohex(unsigned char n, int prefix)
{
	int		len;
	char	*str;

	len = ft_charlen_hex(n, prefix, 0) + 1;
	if (!(str = malloc(len)))
		return (NULL);
	str[len] = 0;
	return (ft_ctohex_to(n, str, prefix));
}

char	*ft_ctooctal(unsigned char n)
{
	int		len;
	char	*str;

	len = ft_charlen_octal(n) + 1;
	if (!(str = malloc(len)))
		return (NULL);
	str[len] = 0;
	return (ft_stooctal_to(n, str));
}
