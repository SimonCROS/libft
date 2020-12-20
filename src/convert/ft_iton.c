/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iton.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:26:24 by scros             #+#    #+#             */
/*   Updated: 2020/12/20 18:53:15 by scros            ###   ########lyon.fr   */
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
	return (ft_itoa_to(n, str));
}

char	*ft_uitoa(unsigned int n)
{
	int		len;
	char	*str;

	len = ft_intlen(n) + 1;
	if (!(str = malloc(len)))
		return (NULL);
	return (ft_uitoa_to(n, str));
}

char	*ft_itohex(unsigned int n, int prefix, int min_width)
{
	int		len;
	char	*str;

	len = ft_intlen_hex(n, prefix, min_width) + 1;
	if (!(str = malloc(len)))
		return (NULL);
	return (ft_itohex_to(n, str, prefix, min_width));
}
