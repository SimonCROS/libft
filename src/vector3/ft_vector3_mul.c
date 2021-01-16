/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_mul.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 17:46:44 by scros             #+#    #+#             */
/*   Updated: 2021/01/16 13:32:50 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "vector3.h"

t_vector3	ft_vector3_mul(const t_vector3 *v, float x, float y, float z)
{
	t_vector3 vec;

	vec.x = v->x * x;
	vec.y = v->y * y;
	vec.z = v->z * z;
	return (vec);
}

t_vector3	ft_vector3_muld(const t_vector3 *v, float a)
{
	return (ft_vector3_mul(v, a, a, a));
}

t_vector3	ft_vector3_mulv(const t_vector3 *v1, const t_vector3 *v2)
{
	return (ft_vector3_mul(v1, v2->x, v2->y, v2->z));
}
