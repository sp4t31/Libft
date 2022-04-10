/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatel <spatel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:26:13 by spatel            #+#    #+#             */
/*   Updated: 2022/04/07 11:43:17 by spatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*m;

	m = malloc(nitems * size);
	if (!m)
		return (NULL);
	ft_bzero(m, nitems * size);
	return (m);
}
