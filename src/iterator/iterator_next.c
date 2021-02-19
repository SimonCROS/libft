/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator_next.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 17:02:11 by scros             #+#    #+#             */
/*   Updated: 2021/02/19 11:10:24 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "iterator.h"

void	*iterator_next(t_iterator *iterator)
{
	void *tmp;

	if (!iterator->current)
		return (NULL);
	tmp = iterator->current->value;
	iterator->current = iterator->current->next;
	return (tmp);
}
