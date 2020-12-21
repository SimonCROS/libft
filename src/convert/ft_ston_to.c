/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ston_to.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 17:45:33 by scros             #+#    #+#             */
/*   Updated: 2020/12/21 14:37:54 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Write the short n in the string dest.
**
** Returns dest.
*/

char	*ft_stoa_to(short n, char *dest)
{
	int	len;

	len = ft_strlen(dest);
	ft_memset(dest, '0', len);
	if (n == -32768)
	{
		ft_strlcpy(dest, "-32768", len + 1);
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
** Write the unsigned short n in the string dest.
**
** Returns dest.
*/

char	*ft_ustoa_to(unsigned short n, char *dest)
{
	int	len;

	len = ft_strlen(dest);
	ft_memset(dest, '0', len);
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
** Write the unsigned short in the string dest in hex format.
**
** Returns dest.
*/

char	*ft_stohex_to(unsigned short n, char *dest, int prefix)
{
	int		len;
	short	c;

	len = ft_strlen(dest);
	ft_memset(dest, '0', len);
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
