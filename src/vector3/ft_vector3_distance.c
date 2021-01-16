/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_distance.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 17:00:03 by scros             #+#    #+#             */
/*   Updated: 2021/01/16 13:32:25 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "vector3.h"
#include "ftmath.h"

float	ft_vector3_distance_squared(const t_vector3 *v, float x, float y,
	float z)
{
	float dx;
	float dy;
	float dz;

	dx = v->x - x;
	dy = v->y - y;
	dz = v->z - z;
	return (dx * dx + dy * dy + dz * dz);
}

float	ft_vector3_distance_squaredv(const t_vector3 *v1, const t_vector3 *v2)
{
	return (ft_vector3_distance_squared(v1, v2->x, v2->y, v2->z));
}

float	ft_vector3_distance(const t_vector3 *v, float x, float y, float z)
{
	return (ft_sqrt(ft_vector3_distance_squared(v, x, y, z)));
}

float	ft_vector3_distancev(const t_vector3 *v1, const t_vector3 *v2)
{
	return (ft_vector3_distance(v1, v2->x, v2->y, v2->z));
}
