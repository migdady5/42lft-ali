/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amigdadi <amigdadi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 17:28:35 by amigdadi          #+#    #+#             */
/*   Updated: 2025/12/01 12:45:56 by amigdadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*int	main(void)
{
	int	tests[] = {' ', '!', 'A', 'z', '0', '~', 31, 127, -1, 200};
	int	i;

	i = 0;
	while (i < (int)(sizeof(tests) / sizeof(tests[0])))
	{
		printf("ft_isprint(%3d) = %d\n", tests[i], ft_isprint(tests[i]));
		i++;
	}
	return (0);
}*/