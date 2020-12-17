/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:26:24 by scros             #+#    #+#             */
/*   Updated: 2020/12/16 17:19:49 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ltoa(int n)
{
	long int	len;
	char		*str;

	len = ft_intlen(n) + 1;
	if (!(str = malloc(len)))
		return (NULL);
	return (ft_itoa_to(n, str));
}
