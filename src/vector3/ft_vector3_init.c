/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_init.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 17:34:40 by scros             #+#    #+#             */
/*   Updated: 2021/01/12 18:03:57 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "vector3.h"

t_vector3	*ft_vector3_init(t_vector3 *v, double x, double y, double z)
{
	v->x = x;
	v->y = y;
	v->z = z;
	return (v);
}
