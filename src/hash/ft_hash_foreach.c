/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:41:48 by scros             #+#    #+#             */
/*   Updated: 2021/01/26 15:10:33 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_hash_foreach(t_hash *hash, t_biconsumer visitor)
{
	t_hentry *entry;

	if (ft_hash_is_empty(hash))
		return ;
	entry = hash->first;
	visitor(entry->key, entry->value);
	while (entry->next)
	{
		entry = entry->next;
		visitor(entry->key, entry->value);
	}
}
