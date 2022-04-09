/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatel <spatel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 12:56:39 by marvin            #+#    #+#             */
/*   Updated: 2022/04/01 17:54:32 by spatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	writes string s to file descriptor

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
