/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 16:42:19 by scros             #+#    #+#             */
/*   Updated: 2021/01/15 17:23:32 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath.h"

double	ft_sqrt(double n)
{
	double	min;
	double	max;
	double	mid;
	int		i;

	min = ft_fmin(1, n);
	max = ft_fmax(1, n);
	i = -1;
	while (100 * min * min < n)
		min *= 10;
	while (100 * max * max > n)
		max *= 0.1;
	while (++i < 100)
	{
		mid = (min + max) / 2;
		if (mid * mid == n)
			return (mid);
		if (mid * mid > n)
			max = mid;
		else
			min = mid;
	}
	return (mid);
}
