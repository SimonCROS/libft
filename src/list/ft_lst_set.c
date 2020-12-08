/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_set.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 14:42:35 by scros             #+#    #+#             */
/*   Updated: 2020/12/08 14:54:20 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lst_set(t_list *list, int index, void *new_value)
{
	t_entry	*entry;
	void	*buf;

	if (!(entry = ft_lst_get_entry(list, index)))
		return (NULL);
	buf = entry->value;
	entry->value = new_value;
	return (buf);
}
