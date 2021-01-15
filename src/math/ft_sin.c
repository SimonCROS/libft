/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sin.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 12:29:22 by scros             #+#    #+#             */
/*   Updated: 2021/01/15 12:49:57 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "_math.h"

double	ft_sin(double x){
    int		i;
    double	cur;
    double	acc;
    double	fact;
    double	pow;

	i = 1;
	cur = x;
	acc = 1;
	fact = 1;
	pow = x;
    while (ft_fabs(acc) > .00000001 && i < 100){
        fact *= ((2*i)*(2*i+1));
        pow *= -1 * x*x; 
        acc =  pow / fact;
        cur += acc;
        i++;
    }
    return (cur);
}