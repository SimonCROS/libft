/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_set.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 17:34:40 by scros             #+#    #+#             */
/*   Updated: 2021/01/16 13:33:18 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "vector3.h"

t_vector3	*ft_vector3_setx(t_vector3 *v, float x)
{
	v->x = x;
	return (v);
}

t_vector3	*ft_vector3_sety(t_vector3 *v, float y)
{
	v->y = y;
	return (v);
}

t_vector3	*ft_vector3_setz(t_vector3 *v, float z)
{
	v->z = z;
	return (v);
}

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
