/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_get_entry.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 14:33:21 by scros             #+#    #+#             */
/*   Updated: 2020/12/08 14:43:49 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_entry	*ft_lst_get_entry(t_list *list, int index)
{
	t_entry	*entry;
	int		i;

	if (ft_lst_is_empty(list))
		return (NULL);
	entry = list->first;
	i = 0;
	while (entry)
	{
		if (i == index)
			return (entry);
		entry = entry->next;
		++i;
	}
	return (NULL);
}
