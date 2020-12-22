/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iton.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:26:24 by scros             #+#    #+#             */
/*   Updated: 2020/12/22 11:44:22 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = ft_intlen(n) + 1;
	if (!(str = malloc(len)))
		return (NULL);
	str[len] = 0;
	return (ft_itoa_to(n, str));
}

char	*ft_uitoa(unsigned int n)
{
	int		len;
	char	*str;

	len = ft_intlen(n) + 1;
	if (!(str = malloc(len)))
		return (NULL);
	str[len] = 0;
	return (ft_uitoa_to(n, str));
}

char	*ft_itohex(unsigned int n, int prefix)
{
	int		len;
	char	*str;

	len = ft_intlen_hex(n, prefix, 0) + 1;
	if (!(str = malloc(len)))
		return (NULL);
	str[len] = 0;
	return (ft_itohex_to(n, str, prefix));
}

char	*ft_itooctal(unsigned int n)
{
	int		len;
	char	*str;

	len = ft_intlen_octal(n) + 1;
	if (!(str = malloc(len)))
		return (NULL);
	str[len] = 0;
	return (ft_itooctal_to(n, str));
}
