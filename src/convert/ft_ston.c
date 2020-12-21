/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ston.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:26:24 by scros             #+#    #+#             */
/*   Updated: 2020/12/21 14:20:58 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_stoa(short n)
{
	int		len;
	char	*str;

	len = ft_shortlen(n) + 1;
	if (!(str = malloc(len)))
		return (NULL);
	return (ft_stoa_to(n, str));
}

char	*ft_ustoa(unsigned short n)
{
	int		len;
	char	*str;

	len = ft_shortlen(n) + 1;
	if (!(str = malloc(len)))
		return (NULL);
	return (ft_ustoa_to(n, str));
}

char	*ft_stohex(unsigned short n, int prefix)
{
	int		len;
	char	*str;

	len = ft_shortlen_hex(n, prefix, 0) + 1;
	if (!(str = malloc(len)))
		return (NULL);
	str[len] = 0;
	return (ft_stohex_to(n, str, prefix));
}
