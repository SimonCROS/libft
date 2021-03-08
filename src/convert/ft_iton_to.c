/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iton_to.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 17:45:33 by scros             #+#    #+#             */
/*   Updated: 2021/03/08 14:56:57 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Write the unsigned integer n in the string dest.
**
** Returns dest.
*/

char	*ft_uitoa_to(unsigned int n, char *dest)
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
** Write the unsigned integer in the string dest in hex format.
**
** Returns dest.
*/

char	*ft_itohex_to(unsigned int n, char *dest, int prefix)
{
	int	len;
	int	c;

	len = ft_strlen(dest);
	ft_memset(dest, '0', len);
	while (1)
	{
		c = (n % 16);
		if (c > 9)
			dest[--len] = 'a' + c - 10;
		else
			dest[--len] = '0' + c;
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

/*
** Write the unsigned int in the string dest in octal format.
**
** Returns dest.
*/

char	*ft_itooctal_to(unsigned int n, char *dest)
{
	int		len;
	char	c;

	len = ft_strlen(dest);
	ft_memset(dest, '0', len);
	while (1)
	{
		c = (n % 8);
		dest[--len] = '0' + c;
		if (!n)
			break ;
		n /= 8;
	}
	return (dest);
}
