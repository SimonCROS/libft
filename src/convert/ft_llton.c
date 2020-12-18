/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llton.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:26:24 by scros             #+#    #+#             */
/*   Updated: 2020/12/18 18:02:43 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_lltoa(long n)
{
	int		len;
	char	*str;

	len = ft_intlen(n) + 1;
	if (!(str = malloc(len)))
		return (NULL);
	return (ft_ltoa_to(n, str));
}

char	*ft_ulltoa(unsigned long n)
{
	int		len;
	char	*str;

	len = ft_intlen(n) + 1;
	if (!(str = malloc(len)))
		return (NULL);
	return (ft_ultoa_to(n, str));
}

char	*ft_lltohex(unsigned long n)
{
	long int	len;
	char		*str;

	len = ft_longlen_hex(n) + 1;
	if (!(str = malloc(len)))
		return (NULL);
	return (ft_ltohex_to(n, str));
}
