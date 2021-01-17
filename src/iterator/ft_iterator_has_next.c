/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterator_has_next.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 16:10:53 by scros             #+#    #+#             */
/*   Updated: 2021/01/17 10:45:48 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "iterator.h"

short	ft_iterator_has_next(const t_iterator *iterator)
{
	return (!!iterator->current);
}
