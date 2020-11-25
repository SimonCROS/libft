/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:26:24 by scros             #+#    #+#             */
/*   Updated: 2020/11/25 15:26:11 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	ft_numlen(long int n)
{
	if (n < 0)
		return (1 + ft_numlen(n * -1));
	if (n < 10)
		return (1);
	return (1 + ft_numlen(n / 10));
}

char			*ft_itoa(int n)
{
	long int	len;
	long int	nbr;
	char		*str;

	nbr = n;
	len = ft_numlen(nbr) + 1;
	if (!(str = malloc(len)))
		return (NULL);
	if (n < 0)
		nbr *= -1;
	str[--len] = 0;
	while (1)
	{
		str[--len] = (nbr % 10) + '0';
		if (!nbr)
			break ;
		nbr /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
