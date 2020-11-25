/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 13:46:44 by scros             #+#    #+#             */
/*   Updated: 2020/11/25 12:07:38 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*pointer;
	size_t	size;
	int		i;

	size = ft_strlen(s1) + 1;
	if (!(pointer = malloc(size)))
		return (0);
	i = 0;
	while (s1[i])
	{
		pointer[i] = s1[i];
		i++;
	}
	pointer[i] = 0;
	return (pointer);
}
