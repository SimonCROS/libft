/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_concat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:41:48 by scros             #+#    #+#             */
/*   Updated: 2020/12/08 15:31:35 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lst_concat(t_list *t1, t_list *t2)
{
	t_list	*copy;

	if (t1->delete != t2->delete)
		return (NULL);
	if (!(copy = ft_lst_new(t1->delete)))
		return (NULL);
	ft_lst_add_all(copy, t1);
	ft_lst_add_all(copy, t2);
	return (copy);
}