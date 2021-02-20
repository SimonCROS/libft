/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_new_entry.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 14:08:54 by scros             #+#    #+#             */
/*   Updated: 2020/12/10 10:19:48 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_entry	*ft_lst_new_entry(void *value)
{
	t_entry	*entry;

	entry = malloc(sizeof(t_entry));
	if (!entry)
		return (NULL);
	entry->value = value;
	entry->next = NULL;
	return (entry);
}
