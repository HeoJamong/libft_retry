/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 21:39:36 by jheo              #+#    #+#             */
/*   Updated: 2024/03/11 13:49:57 by jheo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*arr;
	size_t			i;

	i = 0;
	arr = (unsigned char *)malloc(size * nmemb);
	if (arr == 0)
		return (0);
	while (i < size * nmemb)
	{
		arr[i] = 0;
		i++;
	}
	return ((void *)arr);
}
