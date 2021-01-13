/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_cross.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 17:11:39 by scros             #+#    #+#             */
/*   Updated: 2021/01/13 17:19:25 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "vector3.h"

t_vector3	*ft_vector3_cross(t_vector3 *v, double x, double y, double z)
{
	t_vector3 tmp;

	ft_vector3_copy(&tmp, v);
	v->x = tmp.y * z - tmp.z * y;
	v->x = tmp.z * x - tmp.x * z;
	v->x = tmp.x * y - tmp.y * x;
	return (v);
}

t_vector3	*ft_vector3_crossv(t_vector3 *v1, const t_vector3 *v2)
{
	return (ft_vector3_cross(v1, v2->x, v2->y, v2->z));
}
