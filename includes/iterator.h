/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:35:16 by scros             #+#    #+#             */
/*   Updated: 2021/01/16 17:07:49 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITERATOR_H
# define ITERATOR_H

# include "list.h"

typedef struct	s_iterator
{
	t_entry		*current;
}				t_iterator;

short			ft_iterator_has_next(const t_iterator *iterator);
void			*ft_iterator_next(t_iterator *iterator);
t_iterator		*ft_iterator_new(const t_list *list);

#endif
