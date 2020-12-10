/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:41:48 by scros             #+#    #+#             */
/*   Updated: 2020/12/10 11:08:55 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lst_map(t_list *list, t_function mapper)
{
	t_entry	*entry;
	t_list	*copy;

	if (!(copy = ft_lst_new(list->delete)))
		return (NULL);
	if (ft_lst_is_empty(list))
		return (copy);
	entry = list->first;
	ft_lst_push(copy, mapper(entry->value));
	while (entry->next)
	{
		entry = entry->next;
		ft_lst_push(copy, mapper(entry->value));
	}
	return (copy);
}
