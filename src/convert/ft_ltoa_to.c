/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa_to.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 17:45:33 by scros             #+#    #+#             */
/*   Updated: 2020/12/16 17:28:05 by scros            ###   ########lyon.fr   */
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
	long long	len;
	long long	nbr;

	len = ft_longlen(n);
	nbr = n;
	if (n < 0)
		nbr *= -1;
	dest[len] = 0;
	while (1)
	{
		dest[--len] = (nbr % 10) + '0';
		if (!nbr)
			break ;
		nbr /= 10;
	}
	if (n < 0)
		dest[0] = '-';
	return (dest);
}
