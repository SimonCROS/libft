/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa_to.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 17:45:33 by scros             #+#    #+#             */
/*   Updated: 2020/12/17 14:43:40 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Write the integer n in the string dest.
**
** Returns dest.
*/

char	*ft_uitoa_to(int n, char *dest)
{
	long int	len;
	long int	nbr;

	len = ft_intlen(n);
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
