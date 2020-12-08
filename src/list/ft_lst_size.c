/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:41:48 by scros             #+#    #+#             */
/*   Updated: 2020/12/08 17:17:09 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lst_size(t_list *list)
{
	t_entry	*entry;
	int		i;

	if (ft_lst_is_empty(list))
		return (0);
	entry = list->first;
	i = 1;
	while (entry->next)
	{
		entry = entry->next;
		++i;
	}
	return (i);
}
