/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:54:16 by jheo              #+#    #+#             */
/*   Updated: 2024/03/12 15:36:14 by jheo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	int	num_len(long long num, int *minus)
{
	int	cnt;

	cnt = 0;
	if (num < 0)
	{
		num *= -1;
		*minus = 1;
	}
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num /= 10;
		cnt++;
	}
	return (cnt);
}

static	void	push_num(char *str, long long num, int minus, int len)
{
	while (num > 0)
	{
		str[len + minus - 1] = (num % 10) + '0';
		num /= 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	int			minus;
	long long	num;

	minus = 0;
	num = n;
	len = 0;
	len = num_len(num, &minus);
	str = (char *)malloc(sizeof(char) * (len + 1 + minus));
	if (str == 0)
		return (0);
	if (minus == 1)
		str[0] = '-';
	str[len + minus] = '\0';
	if (num == 0)
		str[0] = '0';
	if (n < 0)
		num = -num;
	push_num(str, num, minus, len);
	return (str);
}
