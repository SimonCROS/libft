/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llton.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:26:24 by scros             #+#    #+#             */
/*   Updated: 2020/12/20 18:53:12 by scros            ###   ########lyon.fr   */
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
	return (ft_lltoa_to(n, str));
}

char	*ft_ulltoa(unsigned long n)
{
	int		len;
	char	*str;

	len = ft_longlonglen(n) + 1;
	if (!(str = malloc(len)))
		return (NULL);
	return (ft_ulltoa_to(n, str));
}

char	*ft_lltohex(unsigned long n, int prefix, int min_width)
{
	int		len;
	char	*str;

	len = ft_longlonglen_hex(n, prefix, min_width) + 1;
	if (!(str = malloc(len)))
		return (NULL);
	return (ft_lltohex_to(n, str, prefix, min_width));
}
