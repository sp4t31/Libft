/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatel <spatel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:26:57 by spatel            #+#    #+#             */
/*   Updated: 2022/04/09 14:30:24 by spatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Concatenates strings 'dst' and 'src', adding (dstsize - strlen(dst) - 1) 
	bytes to the end of 'dst', with the last byte reserved for the 
	NULL-terminator. Returns length of the string it tried to create */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while ((i + 1) < dstsize && src[j])
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[j]));
}
