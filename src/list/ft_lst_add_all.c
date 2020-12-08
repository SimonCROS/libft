/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_add_all.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:41:48 by scros             #+#    #+#             */
/*   Updated: 2020/12/08 15:30:28 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lst_add_all(t_list *container, t_list *list)
{
	t_entry	*current;
	t_entry	*last;
	int		i;

	if (container->delete != list->delete || ft_lst_is_empty(list))
		return (container->size);
	i = 0;
	last = ft_lst_last_entry(container);
	current = list->first;
	while (i++ < list->size)
	{
		if (!last)
		{
			last = ft_lst_new_entry(current->value);
			container->first = last;
		}
		else
		{
			last->next = ft_lst_new_entry(current->value);
			last = last->next;
		}
		current = current->next;
		++(container->size);
	}
	return (container->size);
}
