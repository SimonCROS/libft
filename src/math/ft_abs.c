/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 10:59:00 by scros             #+#    #+#             */
/*   Updated: 2021/01/15 12:47:41 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_abs(long number)
{
	if (number < 0)
		return (-number);
	return (number);
}

double	ft_fabs(double number)
{
	if (number < 0)
		return (-number);
	return (number);
}
