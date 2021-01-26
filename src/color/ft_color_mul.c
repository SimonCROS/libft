/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color_mul.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 17:46:44 by scros             #+#    #+#             */
/*   Updated: 2021/01/26 13:31:00 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath.h"
#include "color.h"

t_color	ft_color_mul(const t_color v, float r, float g, float b)
{
	t_color vec;

	vec.r = ft_fmax(ft_fmin(v.r * r, 255), 0);
	vec.g = ft_fmax(ft_fmin(v.g * g, 255), 0);
	vec.b = ft_fmax(ft_fmin(v.b * b, 255), 0);
	vec.a = 255;
	return (vec);
}

t_color	ft_color_muld(const t_color v, float a)
{
	return (ft_color_mul(v, a, a, a));
}

t_color	ft_color_mulv(const t_color v1, const t_color v2)
{
	return (ft_color_mul(v1, v2.r, v2.g, v2.b));
}
