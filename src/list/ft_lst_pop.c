/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_pop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:41:48 by scros             #+#    #+#             */
/*   Updated: 2020/12/08 14:53:32 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lst_pop(t_list *list)
{
	t_entry *last;
	void	*value;

	if (ft_lst_is_empty(list))
		return (NULL);
	last = list->first;
	if (!last->next)
		list->first = NULL;
	while (last->next)
	{
		if (!last->next->next)
			last->next = NULL;
		last = last->next;
	}
	value = last->value;
	free(last);
	--(list->size);
	return (value);
}
