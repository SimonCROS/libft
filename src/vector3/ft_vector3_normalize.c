/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_normalize.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 16:58:02 by scros             #+#    #+#             */
/*   Updated: 2021/02/02 12:36:57 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "vector3.h"

t_vector3	vec3_normalize(t_vector3 v)
{
	float	length;

	length = vec3_length(v);
	if (length == 0)
		return (vec3_new(0, 0, 0));
	return (vec3_divd(v, length));
}
