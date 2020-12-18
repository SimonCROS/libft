/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lton_to.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 17:45:33 by scros             #+#    #+#             */
/*   Updated: 2020/12/18 14:31:16 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Write the long n in the string dest.
**
** Returns dest.
*/

char	*ft_ltoa_to(long n, char *dest)
{
	int	len;

	len = ft_longlen(n);
	if (n < 0 && n - 1 > 0)
	{
		ft_strlcpy(dest, "-9223372036854775808", len + 1);
		return (dest);
	}
	if (n < 0)
		n *= -1;
	dest[len] = 0;
	while (1)
	{
		dest[--len] = (n % 10) + '0';
		if (!n)
			break ;
		n /= 10;
	}
	if (n < 0)
		dest[0] = '-';
	return (dest);
}

/*
** Write the unsigned long n in the string dest.
**
** Returns dest.
*/

char	*ft_ultoa_to(unsigned long n, char *dest)
{
	int	len;

	len = ft_ulonglen(n);
	dest[len] = 0;
	while (1)
	{
		dest[--len] = (n % 10) + '0';
		if (!n)
			break ;
		n /= 10;
	}
	return (dest);
}

/*
** Write the unsigned long in the string dest in hex format.
**
** Returns dest.
*/

char	*ft_ltohex_to(unsigned long n, char *dest)
{
	int	len;
	int c;

	len = ft_longlen_hex(n);
	dest[len] = 0;
	while (1)
	{
		c = (n % 16);
		dest[--len] = (c > 9) ? 'a' + c - 10 : '0' + c;
		if (!n)
			break ;
		n /= 16;
	}
	return (dest);
}
