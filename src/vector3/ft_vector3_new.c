/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_new.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 16:58:02 by scros             #+#    #+#             */
/*   Updated: 2021/01/16 13:32:59 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "vector3.h"

t_vector3	*ft_vector3_new(float x, float y, float z)
{
	t_vector3	*vec;

	if (!(vec = malloc(sizeof(t_vector3))))
		return (NULL);
	ft_vector3_set(vec, x, y, z);
	return (vec);
}

t_vector3	ft_vector3_news(float x, float y, float z)
{
	t_vector3	vec;

	ft_vector3_set(&vec, x, y, z);
	return (vec);
}
