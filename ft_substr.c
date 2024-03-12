/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:38:56 by jheo              #+#    #+#             */
/*   Updated: 2024/03/11 16:59:32 by jheo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		num;
	char		*arr;

	if (s == 0)
		return (0);
	num = 0;
	arr = (char *)malloc(sizeof(char) * (len + 1));
	if (arr == 0)
		return (0);
	while (num < len && s[start + num] != 0 && start < len)
	{
		arr[num] = s[start + num];
		num++;
	}
	arr[num] = '\0';
	return (arr);
}
