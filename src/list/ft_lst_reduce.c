/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_reduce.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 11:20:17 by scros             #+#    #+#             */
/*   Updated: 2020/12/10 12:35:39 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lst_reduce(t_list *list, void *identity, t_bifunction accumulator,
	t_consumer accumulator_free)
{
	t_entry	*entry;
	void	*identity_tmp;

	if (ft_lst_is_empty(list))
		return (identity);
	entry = list->first;
	while (entry)
	{
		identity_tmp = identity;
		identity = accumulator(identity, entry->value);
		if (accumulator_free)
			accumulator_free(identity_tmp);
		entry = entry->next;
	}
	return (identity);
}
