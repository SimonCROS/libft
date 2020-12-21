/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llton_to.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 17:45:33 by scros             #+#    #+#             */
/*   Updated: 2020/12/21 14:17:43 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Write the long long n in the string dest.
**
** Returns dest.
*/

char	*ft_lltoa_to(long long n, char *dest)
{
	int	len;

	len = ft_longlonglen(n);
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
** Write the unsigned long long n in the string dest.
**
** Returns dest.
*/

char	*ft_ulltoa_to(unsigned long long n, char *dest)
{
	int	len;

	len = ft_ulonglonglen(n);
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
** Write the unsigned long long in the string dest in hex format.
**
** Returns dest.
*/

char	*ft_lltohex_to(unsigned long long n, char *dest, int prefix)
{
	int	len;
	int c;

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
