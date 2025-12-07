/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amigdadi <amigdadi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 21:58:00 by amigdadi          #+#    #+#             */
/*   Updated: 2025/12/01 12:45:57 by amigdadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*int	main(void)
{
	int a = '5';
	int b = 'x';

	printf("ft_isdigit('%c') = %d\n", a, ft_isdigit(a));
	printf("ft_isdigit('%c') = %d\n", b, ft_isdigit(b));
	return (0);
}*/
