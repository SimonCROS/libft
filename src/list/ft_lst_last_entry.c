/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_last_entry.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:41:48 by scros             #+#    #+#             */
/*   Updated: 2020/12/10 11:14:28 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_entry	*ft_lst_last_entry(t_list *list)
{
	t_entry	*entry;

	if (ft_lst_is_empty(list))
		return (NULL);
	entry = list->first;
	while (entry->next)
		entry = entry->next;
	return (entry);
}
