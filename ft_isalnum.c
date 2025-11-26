/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amigdadi <amigdadi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:00:00 by amigdadi          #+#    #+#             */
/*   Updated: 2025/11/26 20:28:42 by amigdadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*int	main(void)
{
	int	test_chars[] = {'A', 'z', '5', '#', '0'};
	int	i;

	i = 0;
	while (i < (int)(sizeof(test_chars) / sizeof(test_chars[0])))
	{
		printf("ft_isalnum('%c') = %d\n",
			test_chars[i], ft_isalnum(test_chars[i]));
		i++;
	}
	return (0);
}*/
