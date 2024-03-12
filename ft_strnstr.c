/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:24:09 by jheo              #+#    #+#             */
/*   Updated: 2024/03/05 21:31:47 by jheo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*t1;
	char	*t2;

	t1 = (char *) big;
	t2 = (char *) little;
	i = 0;
	if (*t2 == 0)
		return (t1);
	while (i < len && t1[i])
	{
		j = 0;
		while (t1[i + j] == t2[j] && (i + j) < len)
		{
			j++;
			if (t2[j] == 0)
				return (&(t1[i]));
		}
		i++;
	}
	return (0);
}
