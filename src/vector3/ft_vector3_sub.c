/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_sub.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 17:46:44 by scros             #+#    #+#             */
/*   Updated: 2021/01/16 13:33:24 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "vector3.h"

t_vector3	ft_vector3_sub(const t_vector3 *v, float x, float y, float z)
{
	t_vector3 vec;

	vec.x = v->x - x;
	vec.y = v->y - y;
	vec.z = v->z - z;
	return (vec);
}

t_vector3	ft_vector3_subv(const t_vector3 *v1, const t_vector3 *v2)
{
	return (ft_vector3_sub(v1, v2->x, v2->y, v2->z));
}
