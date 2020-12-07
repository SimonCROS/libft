/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 17:34:09 by scros             #+#    #+#             */
/*   Updated: 2020/11/25 18:32:06 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*last;

	if (!lst)
		return (NULL);
	if (!(first = ft_lstnew(f(lst->content))))
		return (NULL);
	last = first;
	while (lst->next)
	{
		lst = lst->next;
		if (lst)
		{
			if (!(last->next = ft_lstnew(f(lst->content))))
			{
				ft_lstclear(&first, del);
				return (NULL);
			}
			last = last->next;
		}
	}
	return (first);
}
