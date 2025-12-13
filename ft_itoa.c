/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amigdadi <amigdadi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 15:11:09 by amigdadi          #+#    #+#             */
/*   Updated: 2025/12/12 15:11:09 by amigdadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_itoa_len(long n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	n2;
	size_t	len;
	int		neg;

	n2 = (long)n;
	neg = 0;
	if (n2 < 0)
	{
		neg = 1;
		n2 = -n2;
	}
	len = ft_itoa_len((long)n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n2 == 0)
		str[0] = '0';
	while (n2 > 0)
	{
		len--;
		str[len] = (char)((n2 % 10) + '0');
		n2 /= 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}