/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_new.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 16:58:02 by scros             #+#    #+#             */
/*   Updated: 2021/02/02 12:35:07 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "vector3.h"

t_vector3	*vec3_malloc(float x, float y, float z)
{
	t_vector3	*vec;

	vec = malloc(sizeof(t_vector3));
	if (!vec)
		return (NULL);
	vec3_set(vec, x, y, z);
	return (vec);
}

t_vector3	vec3_new(float x, float y, float z)
{
	t_vector3	vec;

	vec3_set(&vec, x, y, z);
	return (vec);
}
