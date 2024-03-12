/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:31:19 by jheo              #+#    #+#             */
/*   Updated: 2024/03/12 15:42:46 by jheo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	word_count(char const *s, char c)
{
	size_t	cnt;
	size_t	i;

	cnt = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			cnt++;
		while (s[i] != c && s[i])
			i++;
	}
	return (cnt);
}

static	size_t	word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	cnt;
	size_t	i;
	size_t	arr_len;
	char	**arr;

	if (!s)
		return (NULL);
	i = 0;
	cnt = word_count(s, c);
	arr = (char **)malloc(sizeof(char *) * (cnt + 1));
	if (!arr)
		return (0);
	while (i < cnt)
	{
		while (*s == c)
			s++;
		arr_len = word_len(s, c);
		arr[i] = (char *)malloc(sizeof(char) * (arr_len + 1));
		ft_memcpy(arr[i], s, arr_len);
		arr[i++][arr_len] = 0;
		s += arr_len;
	}
	arr[i] = 0;
	return (arr);
}
