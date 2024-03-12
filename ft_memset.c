/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:26:33 by jheo              #+#    #+#             */
/*   Updated: 2024/03/11 15:45:35 by jheo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	num;

	str = (unsigned char *)s;
	num = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		str[i] = num;
		i++;
	}
	return (str);
}
