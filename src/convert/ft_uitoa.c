/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 17:28:26 by scros             #+#    #+#             */
/*   Updated: 2020/12/17 15:41:16 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_uitoa(unsigned int n)
{
	long int	len;
	char		*str;

	len = ft_intlen(n) + 1;
	if (!(str = malloc(len)))
		return (NULL);
	return (ft_itoa_to(n, str));
}
