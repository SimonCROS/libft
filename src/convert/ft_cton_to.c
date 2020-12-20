/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cton_to.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 17:45:33 by scros             #+#    #+#             */
/*   Updated: 2020/12/20 19:02:59 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Write the char n in the string dest.
**
** Returns dest.
*/

char	*ft_ctoa_to(char n, char *dest)
{
	int	len;

	len = ft_charlen(n);
	if (n == -128)
	{
		ft_strlcpy(dest, "-128", len + 1);
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
** Write the unsigned char n in the string dest.
**
** Returns dest.
*/

char	*ft_uctoa_to(unsigned char n, char *dest)
{
	int	len;

	len = ft_ucharlen(n);
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
** Write the unsigned char in the string dest in hex format.
**
** Returns dest.
*/

char	*ft_ctohex_to(unsigned char n, char *dest, int prefix, int min_width)
{
	int		len;
	char	c;

	len = ft_charlen_hex(n, prefix, min_width);
	ft_memset(dest, '0', len + 1);
	dest[len] = 0;
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
