/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatel <spatel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:41:05 by spatel            #+#    #+#             */
/*   Updated: 2022/04/09 14:36:37 by spatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	returns a pointer to the first occurance of 'c' in string s.
	searches through up to n bytes. returns NULL ptr if 'c' does
	not occur in string s. */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*src;

	i = 0;
	src = (unsigned char *)s;
	c = (unsigned char)c;
	while (i < n)
	{
		if (src[i] == c)
			return (src + i);
		i++;
	}
	return (NULL);
}
