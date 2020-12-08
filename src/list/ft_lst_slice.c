/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_slice.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 13:51:26 by scros             #+#    #+#             */
/*   Updated: 2020/12/08 14:48:51 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lst_slice(t_list *list, int start, int end)
{
	t_list *copy;

	if (!(copy = ft_lst_new(list->delete)))
		return (NULL);
	if (start < 0)
		start = list->size - start;
	if (end < 0)
		end = list->size - end;
	start = ft_min(start, 0);
	end = ft_min(end, list->size);
	while (start < end)
		ft_lst_push(copy, ft_lst_get(list, start));
	return (copy);
}
