/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llton.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:26:24 by scros             #+#    #+#             */
/*   Updated: 2020/12/22 11:43:00 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_lltoa(long n)
{
	int		len;
	char	*str;

	len = ft_longlonglen(n) + 1;
	if (!(str = malloc(len)))
		return (NULL);
	str[len] = 0;
	return (ft_lltoa_to(n, str));
}

char	*ft_ulltoa(unsigned long n)
{
	int		len;
	char	*str;

	len = ft_longlonglen(n) + 1;
	if (!(str = malloc(len)))
		return (NULL);
	str[len] = 0;
	return (ft_ulltoa_to(n, str));
}

char	*ft_lltohex(unsigned long n, int prefix)
{
	int		len;
	char	*str;

	len = ft_longlonglen_hex(n, prefix, 0) + 1;
	if (!(str = malloc(len)))
		return (NULL);
	str[len] = 0;
	return (ft_lltohex_to(n, str, prefix));
}

char	*ft_lltooctal(unsigned long long n)
{
	int		len;
	char	*str;

	len = ft_longlonglen_octal(n) + 1;
	if (!(str = malloc(len)))
		return (NULL);
	str[len] = 0;
	return (ft_stooctal_to(n, str));
}
