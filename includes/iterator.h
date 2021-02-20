/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:35:16 by scros             #+#    #+#             */
/*   Updated: 2021/02/19 11:11:57 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITERATOR_H
# define ITERATOR_H

# include "list.h"

typedef struct s_iterator
{
	const t_list	*list;
	t_entry			*current;
}	t_iterator;

int					iterator_has_next(const t_iterator *iterator);
void				*iterator_next(t_iterator *iterator);
void				iterator_reset(t_iterator *iterator);
t_iterator			iterator_new(const t_list *list);

#endif
