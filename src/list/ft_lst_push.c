/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:41:48 by scros             #+#    #+#             */
/*   Updated: 2020/12/10 11:09:04 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lst_push(t_list *list, void *element)
{
	t_entry	*entry;

	if (!list)
		return (0);
	entry = ft_lst_new_entry(element);
	if (!entry)
		return (list->size);
	if (ft_lst_is_empty(list))
		list->first = entry;
	else
		ft_lst_last_entry(list)->next = entry;
	return (++(list->size));
}
