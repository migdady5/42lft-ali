/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amigdadi <amigdadi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 17:49:40 by amigdadi          #+#    #+#             */
/*   Updated: 2025/11/30 19:53:54 by amigdadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = '\0';
}

/*int	main(void)
{
        char    str1[16] = "testetesteteste";
        char    str2[16] = "testetesteteste";

        //bzero
        printf("%s\n", str1);
        bzero(str1 + 5, 10);
        printf("%s\n\n", str1);

        //ft_bzero
        printf("%s\n", str2);
        ft_bzero(str2 + 5, 10);
        printf("%s\n", str2);
}*/