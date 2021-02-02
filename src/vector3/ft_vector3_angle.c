/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_angle.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 12:59:06 by scros             #+#    #+#             */
/*   Updated: 2021/02/02 12:48:21 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "vector3.h"

float	vec3_angle(t_vector3 v1, t_vector3 v2)
{
	return (acos(vec3_dotv(v1, v2) / (vec3_length(v1) * vec3_length(v2))));
}
