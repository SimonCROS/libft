/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_set.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 17:34:40 by scros             #+#    #+#             */
/*   Updated: 2021/01/16 14:12:18 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "vector3.h"

t_vector3	*ft_vector3_set(t_vector3 *v, float x, float y, float z)
{
	v->x = x;
	v->y = y;
	v->z = z;
	return (v);
}

t_vector3	*ft_vector3_setv(t_vector3 *v1, const t_vector3 *v2)
{
	return (ft_vector3_set(v1, v2->x, v2->y, v2->z));
}