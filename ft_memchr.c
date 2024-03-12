/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:52:09 by jheo              #+#    #+#             */
/*   Updated: 2024/03/01 20:54:07 by jheo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *buf, int c, size_t count)
{
	size_t				i;
	unsigned char		*buf1;

	buf1 = (unsigned char *)buf;
	i = 0;
	while (i < count)
	{
		if (buf1[i] == (unsigned char)c)
			return ((void *)&(buf1[i]));
		i++;
	}
	return (0);
}
