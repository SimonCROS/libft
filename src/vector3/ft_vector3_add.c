/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_add.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 17:46:44 by scros             #+#    #+#             */
/*   Updated: 2021/01/12 17:47:15 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "vector3.h"

t_vector3	*ft_vector3_add(t_vector3 *v, double x, double y, double z)
{
	v->x += x;
	v->y += y;
	v->z += z;
	return (v);
}

t_vector3	*ft_vector3_addv(t_vector3 *v1, t_vector3 *v2)
{
	return (ft_vector3_add(v1, v2->x, v2->y, v2->z));
}
