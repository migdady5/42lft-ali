/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amigdadi <amigdadi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 15:53:19 by amigdadi          #+#    #+#             */
/*   Updated: 2025/12/01 13:55:30 by amigdadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign = 1;
	long	result;
	int		i;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/*#include <stdio.h>
int main(void)
{
	const char *numStr1 = "1   -12345abc";
	const char *numStr2 = "-2147483648";

	printf("ft_atoi('%s') = %d\n", numStr1, ft_atoi(numStr1));
	printf("ft_atoi('%s') = %d\n", numStr2, ft_atoi(numStr2));
	return (0);
}*/
