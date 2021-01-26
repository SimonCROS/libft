/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:41:48 by scros             #+#    #+#             */
/*   Updated: 2021/01/26 15:10:14 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_hash	*ft_hash_new(t_biconsumer del)
{
	t_hash	*hash;

	if (!(hash = malloc(sizeof(t_hash))))
		return (NULL);
	hash->del = del;
	hash->first = NULL;
	return (hash);
}
