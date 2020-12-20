/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lton.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:26:24 by scros             #+#    #+#             */
/*   Updated: 2020/12/20 17:27:27 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ltoa(long n)
{
	int		len;
	char	*str;

	len = ft_longlen(n) + 1;
	if (!(str = malloc(len)))
		return (NULL);
	return (ft_ltoa_to(n, str));
}

char	*ft_ultoa(unsigned long n)
{
	int		len;
	char	*str;

	len = ft_longlen(n) + 1;
	if (!(str = malloc(len)))
		return (NULL);
	return (ft_ultoa_to(n, str));
}

char	*ft_ltohex(unsigned long n, int prefix)
{
	int		len;
	char	*str;

	len = ft_longlen_hex(n, prefix) + 1;
	if (!(str = malloc(len)))
		return (NULL);
	return (ft_ltohex_to(n, str, prefix));
}
