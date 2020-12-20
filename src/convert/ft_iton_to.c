/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iton_to.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 17:45:33 by scros             #+#    #+#             */
/*   Updated: 2020/12/20 19:02:44 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Write the integer n in the string dest.
**
** Returns dest.
*/

char	*ft_itoa_to(int n, char *dest)
{
	int	len;

	len = ft_intlen(n);
	if (n < 0 && n - 1 > 0)
	{
		ft_strlcpy(dest, "-2147483648", len + 1);
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
** Write the unsigned integer n in the string dest.
**
** Returns dest.
*/

char	*ft_uitoa_to(unsigned int n, char *dest)
{
	int	len;

	len = ft_uintlen(n);
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
** Write the unsigned integer in the string dest in hex format.
**
** Returns dest.
*/

char	*ft_itohex_to(unsigned int n, char *dest, int prefix, int min_width)
{
	int	len;
	int c;

	len = ft_intlen_hex(n, prefix, min_width);
	ft_memset(dest, '0', len + 1);
	while (1)
	{
		c = (n % 16);
		dest[--len] = (c > 9) ? 'a' + c - 10 : '0' + c;
		if (!n)
			break ;
		n /= 16;
	}
	if (prefix)
	{
		dest[0] = '0';
		dest[1] = 'x';
	}
	return (dest);
}
