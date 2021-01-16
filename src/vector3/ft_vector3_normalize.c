/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_normalize.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 16:58:02 by scros             #+#    #+#             */
/*   Updated: 2021/01/16 14:10:59 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "vector3.h"
#include "ftmath.h"

t_vector3	ft_vector3_normalize(const t_vector3 *v)
{
	float	length;

	length = ft_vector3_length(v);
	if (length == 0)
		return (ft_vector3_news(0, 0, 0));
	return (ft_vector3_divd(v, length));
}
