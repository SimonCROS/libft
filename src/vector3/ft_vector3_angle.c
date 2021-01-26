/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_angle.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 12:59:06 by scros             #+#    #+#             */
/*   Updated: 2021/01/26 09:39:59 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "vector3.h"

float	ft_vector3_angle(t_vector3 v1, t_vector3 v2)
{
	return (acos(ft_vector3_dotv(&v1, &v2) /
		(ft_vector3_length(&v1) * ft_vector3_length(&v2))));
}
