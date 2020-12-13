/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_splice.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:41:48 by scros             #+#    #+#             */
/*   Updated: 2020/12/10 14:26:21 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lst_splice(t_list *list, int start, int delete_count, void *value)
{
	t_entry	*first;
//	t_entry	*tmp;
	t_list	*copy;

	if (!list || !(copy = ft_lst_new(list->delete)))
		return (NULL);
	if (start < 0)
		start += list->size;
	start = ft_max(ft_min(list->size, start), 0);
	delete_count = ft_max(ft_min(list->size - start, delete_count), 0);
	while (delete_count--)
		ft_lst_push(copy, ft_lst_remove(list, start + delete_count - 1));
	if (value)
	{
		if (ft_lst_is_empty(list))
			list->first = ft_lst_new_entry(value);
		else
		{
			first = ft_lst_get_entry(list, start - 1);
//			tmp = first->next;
			first->next = ft_lst_new_entry(value);
		}
	}
	return (copy);
}
