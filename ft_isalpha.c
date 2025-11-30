/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amigdadi <amigdadi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 18:37:31 by amigdadi          #+#    #+#             */
/*   Updated: 2025/11/25 21:56:55 by amigdadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isalpha(int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
		return (1);
	return (0);
}
/*int main()
{
	int x = 6;
	printf("%d\n",(ft_isalpha(x)));
}*/
