/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:38:56 by jheo              #+#    #+#             */
/*   Updated: 2024/03/13 15:24:54 by jheo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		num;
	size_t		s_len;
	char		*arr;

	if (s == 0)
		return (0);
	s_len = ft_strlen(s);
	if (s_len <= start || len == 0)
		return (ft_strdup(""));
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
