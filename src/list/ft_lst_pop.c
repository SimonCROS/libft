/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_pop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:41:48 by scros             #+#    #+#             */
/*   Updated: 2020/12/08 17:34:30 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lst_pop(t_list *list)
{
	t_entry **last_pointer;
	t_entry *last;
	void	*value;

	if (ft_lst_is_empty(list))
		return (NULL);
	last = list->first;
	last_pointer = &(list->first);
	while (last->next)
	{
		last_pointer = &(last->next);
		last = last->next;
	}
	value = last->value;
	free(last);
	*last_pointer = NULL;
	--(list->size);
	return (value);
}
