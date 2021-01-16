/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterator_new.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 16:57:00 by scros             #+#    #+#             */
/*   Updated: 2021/01/16 17:08:25 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "iterator.h"

t_iterator	*ft_iterator_new(const t_list *list)
{
	t_iterator	*iterator;

	if (!(iterator = malloc(sizeof(t_iterator))))
		return (NULL);
	iterator->current = list->first;
	return (iterator);
}
