/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_distance.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 17:00:03 by scros             #+#    #+#             */
/*   Updated: 2021/01/15 13:08:02 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "vector3.h"
#include "ftmath.h"

double	ft_vector3_distance_squared(t_vector3 *v, double x, double y, double z)
{
	double dx;
	double dy;
	double dz;

	dx = v->x - x;
	dy = v->y - y;
	dz = v->z - z;
	return (dx * dx + dy * dy + dz * dz);
}

double	ft_vector3_distance_squaredv(t_vector3 *v1, const t_vector3 *v2)
{
	return (ft_vector3_distance_squared(v1, v2->x, v2->y, v2->z));
}

double	ft_vector3_distance(t_vector3 *v, double x, double y, double z)
{
	return (ft_sqrt(ft_vector3_distance_squared(v, x, y, z)));
}

double	ft_vector3_distancev(t_vector3 *v1, const t_vector3 *v2)
{
	return (ft_vector3_distance(v1, v2->x, v2->y, v2->z));
}
