/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_cross.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 17:11:39 by scros             #+#    #+#             */
/*   Updated: 2021/01/16 13:32:05 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "vector3.h"

t_vector3	ft_vector3_cross(const t_vector3 *v, float x, float y, float z)
{
	t_vector3 vec;

	vec.x = v->y * z - v->z * y;
	vec.y = v->z * x - v->x * z;
	vec.z = v->x * y - v->y * x;
	return (vec);
}

t_vector3	ft_vector3_crossv(const t_vector3 *v1, const t_vector3 *v2)
{
	return (ft_vector3_cross(v1, v2->x, v2->y, v2->z));
}
