/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_get.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 14:33:21 by scros             #+#    #+#             */
/*   Updated: 2020/12/08 17:11:16 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lst_get(t_list *list, int index)
{
	t_entry	*entry;

	entry = ft_lst_get_entry(list, index);
	if (!entry)
		return (NULL);
	return (entry->value);
}
