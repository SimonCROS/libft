/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_foreach.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:41:48 by scros             #+#    #+#             */
/*   Updated: 2020/12/10 11:28:17 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_foreach(t_list *list, t_consumer visitor)
{
	t_entry	*entry;

	if (ft_lst_is_empty(list))
		return ;
	entry = list->first;
	visitor(entry->value);
	while (entry->next)
	{
		entry = entry->next;
		visitor(entry->value);
	}
}
