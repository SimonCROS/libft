/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_distance.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 17:00:03 by scros             #+#    #+#             */
/*   Updated: 2021/02/02 12:39:27 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "vector3.h"
#include "ftmath.h"

float	vec3_distance_squared(t_vector3 v, float x, float y,
	float z)
{
	float dx;
	float dy;
	float dz;

	dx = v.x - x;
	dy = v.y - y;
	dz = v.z - z;
	return (ft_fabs(dx * dx + dy * dy + dz * dz));
}

float	vec3_distance_squaredv(t_vector3 v1, t_vector3 v2)
{
	return (vec3_distance_squared(v1, v2.x, v2.y, v2.z));
}

float	vec3_distance(t_vector3 v, float x, float y, float z)
{
	return (ft_sqrt(vec3_distance_squared(v, x, y, z)));
}

float	vec3_distancev(t_vector3 v1, t_vector3 v2)
{
	return (vec3_distance(v1, v2.x, v2.y, v2.z));
}
