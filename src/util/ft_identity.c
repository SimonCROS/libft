/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_identity.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 09:46:13 by scros             #+#    #+#             */
/*   Updated: 2020/12/10 09:55:14 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_identity_funct(void *input)
{
	return (input);
}

t_function	ft_identity(void)
{
	return (&ft_identity_funct);
}
