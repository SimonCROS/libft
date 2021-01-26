/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_remove.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:41:48 by scros             #+#    #+#             */
/*   Updated: 2021/01/26 15:19:51 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_hentry	*ft_hash_remove(t_hash *hash, char *key)
{
	t_hentry	*last;
	t_hentry	*entry;

	if (ft_hash_is_empty(hash))
		return (NULL);
	last = NULL;
	entry = hash->first;
	while (entry)
	{
		if (ft_strcmp(entry->key, key))
		{
			if (last)
				last->next = entry->next;
			else
				hash->first = entry->next;
			entry->next = NULL;
			return (entry);
		}
		last = entry;
		entry = entry->next;
	}
	return (NULL);
}
