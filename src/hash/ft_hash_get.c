/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_get.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 14:33:21 by scros             #+#    #+#             */
/*   Updated: 2021/01/26 15:19:36 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_hash_get(t_hash *hash, char *key)
{
	t_hentry	*entry;

	if (!(entry = ft_hash_get_entry(hash, key)))
		return (NULL);
	return (entry->value);
}
