/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cton.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:26:24 by scros             #+#    #+#             */
/*   Updated: 2020/12/20 18:53:18 by scros            ###   ########lyon.fr   */
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
	return (ft_ctoa_to(n, str));
}

char	*ft_uctoa(unsigned char n)
{
	int		len;
	char	*str;

	len = ft_charlen(n) + 1;
	if (!(str = malloc(len)))
		return (NULL);
	return (ft_uctoa_to(n, str));
}

char	*ft_ctohex(unsigned char n, int prefix, int min_width)
{
	int		len;
	char	*str;

	len = ft_charlen_hex(n, prefix, min_width) + 1;
	if (!(str = malloc(len)))
		return (NULL);
	return (ft_ctohex_to(n, str, prefix, min_width));
}
