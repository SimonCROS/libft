/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_div.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 17:46:44 by scros             #+#    #+#             */
/*   Updated: 2021/01/15 13:29:06 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "vector3.h"

t_vector3	*ft_vector3_div(t_vector3 *v, double x, double y, double z)
{
	v->x /= x;
	v->y /= y;
	v->z /= z;
	return (v);
}

t_vector3	*ft_vector3_divd(t_vector3 *v, double a)
{
	return (ft_vector3_div(v, a, a, a));
}

t_vector3	*ft_vector3_divv(t_vector3 *v1, const t_vector3 *v2)
{
	return (ft_vector3_div(v1, v2->x, v2->y, v2->z));
}
