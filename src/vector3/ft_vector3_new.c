/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_new.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 16:58:02 by scros             #+#    #+#             */
/*   Updated: 2021/01/12 17:42:17 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "vector3.h"

t_vector3	*ft_vector3_new(double x, double y, double z)
{
	t_vector3	*vector;

	if (!(vector = malloc(sizeof(t_vector3))))
		return (NULL);
	return (ft_vector3_init(vector, x, y, z));
}
