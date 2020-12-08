/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_shift.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:41:48 by scros             #+#    #+#             */
/*   Updated: 2020/12/08 17:21:27 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lst_shift(t_list *list)
{
	t_entry *first;
	void	*value;

	if (ft_lst_is_empty(list))
		return (NULL);
	first = ft_lst_shift_entry(list);
	value = first->value;
	free(first);
	return (value);
}
