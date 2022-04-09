/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatel <spatel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:53:33 by marvin            #+#    #+#             */
/*   Updated: 2022/04/07 11:54:30 by spatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_numlen(int num)
{
	unsigned int	len;

	len = 0;
	if (num <= 0)
		len++;
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*s;
	long int		num;
	unsigned int	len;
	int				sign;

	num = n;
	sign = 0;
	len = ft_numlen(num);
	s = malloc(sizeof(char) * len + 1);
	if (!s)
		return (NULL);
	if (num < 0)
	{
		s[0] = '-';
		num *= -1;
		sign = -1;
	}
	s[len] = '\0';
	while (len + sign)
	{
		s[len - 1] = (num % 10 + '0');
		num /= 10;
		len--;
	}
	return (s);
}
