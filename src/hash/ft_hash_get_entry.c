/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_get_entry.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 14:33:21 by scros             #+#    #+#             */
/*   Updated: 2021/01/26 15:19:34 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_hentry	*ft_hash_get_entry(t_hash *hash, char *key)
{
	t_hentry	*entry;

	if (ft_hash_is_empty(hash))
		return (NULL);
	entry = hash->first;
	while (entry)
	{
		if (ft_strcmp(entry->key, key))
			return (entry);
		entry = entry->next;
	}
	return (NULL);
}
