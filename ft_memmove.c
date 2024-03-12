/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:10:38 by jheo              #+#    #+#             */
/*   Updated: 2024/03/12 15:34:01 by jheo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t					i;
	size_t					num;
	unsigned char			*target;

	if (!dest && !src)
		return (0);
	num = n;
	target = (unsigned char *)dest;
	if (dest < src)
	{
		i = 0;
		while (i < num)
		{
			target[i] = *((unsigned char *)src + i);
			i++;
		}
	}
	else
	{
		i = num + 1;
		while (--i)
			target[i - 1] = *((unsigned char *)src + i - 1);
	}
	return (target);
}
