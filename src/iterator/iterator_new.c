/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 16:57:00 by scros             #+#    #+#             */
/*   Updated: 2021/02/19 11:11:33 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "iterator.h"

t_iterator	iterator_new(const t_list *list)
{
	t_iterator	iterator;

	iterator.list = list;
	iterator.current = list->first;
	return (iterator);
}

void		iterator_init(t_iterator *iterator, const t_list *list)
{
	iterator->list = list;
	iterator->current = list->first;
}
