/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa_to.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 17:45:33 by scros             #+#    #+#             */
/*   Updated: 2020/12/18 10:06:51 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Write the unsigned long n in the string dest.
**
** Returns dest.
*/

char	*ft_ultoa_to(unsigned long n, char *dest)
{
	int	len;

	len = ft_ulonglen(n);
	if (n + 1 == 0)
	{
		ft_strlcpy(dest, "18446744073709551615", len + 1);
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
