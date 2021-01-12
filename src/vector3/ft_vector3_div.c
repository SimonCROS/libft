/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_div.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 17:46:44 by scros             #+#    #+#             */
/*   Updated: 2021/01/12 17:52:15 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "vector3.h"

t_vector3	*ft_vector3_viv(t_vector3 *v, double x, double y, double z)
{
	v->x /= x;
	v->y /= y;
	v->z /= z;
	return (v);
}

t_vector3	*ft_vector3_vivd(t_vector3 *v, double a)
{
	return (ft_vector3_viv(v, a, a, a));
}

t_vector3	*ft_vector3_vivv(t_vector3 *v1, t_vector3 *v2)
{
	return (ft_vector3_viv(v1, v2->x, v2->y, v2->z));
}
