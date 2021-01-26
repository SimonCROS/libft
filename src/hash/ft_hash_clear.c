/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:41:48 by scros             #+#    #+#             */
/*   Updated: 2021/01/26 15:19:27 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_hentry	*ft_hash_shift_entry(t_hash *hash)
{
	t_hentry *first;

	if (ft_hash_is_empty(hash))
		return (NULL);
	first = hash->first;
	hash->first = first->next;
	return (first);
}

void			ft_hash_clear(t_hash *hash)
{
	t_hentry *buf;

	if (ft_hash_is_empty(hash))
		return ;
	while ((buf = ft_hash_shift_entry(hash)))
	{
		if (hash->del)
			hash->del(buf->key, buf->value);
		free(buf);
	}
}
