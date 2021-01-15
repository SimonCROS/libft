/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 16:42:19 by scros             #+#    #+#             */
/*   Updated: 2021/01/15 17:57:38 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath.h"

double	ft_sqrt(double n)
{
	double	min;
	double	max;
	double	mid;

	mid = 0;
	min = ft_fmin(1, n);
	max = ft_fmax(1, n);
	while (ft_fabs(n - (mid * mid)) > 0.00001)
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
