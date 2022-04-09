/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatel <spatel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:25:50 by marvin            #+#    #+#             */
/*   Updated: 2022/04/04 17:19:26 by spatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Allocates with malloc and returns a copy of 's1' with
	the characters specified in 'set' removed from the 
	beginning and end of the string
*/

static int	ft_check_ref(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	if (!s1)
		return ((char *)s1);
	start = 0;
	while (s1[start] && ft_check_ref(s1[start], set))
	{
		start++;
	}
	end = ft_strlen(s1) - 1;
	while (end > start && ft_check_ref(s1[end], set))
	{
		end--;
	}
	str = malloc(sizeof(char) * end - start + 2);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + start, end - start + 2);
	return (str);
}
