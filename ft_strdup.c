/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:17:36 by jheo              #+#    #+#             */
/*   Updated: 2024/03/12 15:34:25 by jheo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*arr;
	int		num;

	num = 0;
	while (s[num])
		num++;
	arr = (char *)malloc(sizeof(char) * (num + 1));
	if (arr == 0)
		return (0);
	num = 0;
	while (s[num])
	{
		arr[num] = s[num];
		num++;
	}
	arr[num] = '\0';
	return (arr);
}
