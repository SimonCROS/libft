/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator_reset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 11:00:41 by scros             #+#    #+#             */
/*   Updated: 2021/02/19 11:09:27 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "iterator.h"

void	iterator_reset(t_iterator *iterator)
{
	if (iterator->list)
		iterator->current = iterator->list->first;
}
