/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatel <spatel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:27:19 by spatel            #+#    #+#             */
/*   Updated: 2022/04/06 18:18:18 by spatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	locate first occurence of null-terminated 'needle' string inside 
	the 'haystack' string, with no more than n characters searched.
	returns ptr to the needle if successful, else if needle is an 
	empty string, return haystack, else if needle occurs nowhere in haystack, 
	return NULL. */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		n;

	i = 0;
	n = 0;
	if (!*needle)
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			while (haystack[i + n] == needle[n] && i + n < len && needle[n])
			{
				if (!needle[n + 1])
					return ((char *)haystack + i);
				n++;
			}
		}
		i++;
	}
	return (NULL);
}
