/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amigdadi <amigdadi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 12:44:20 by amigdadi          #+#    #+#             */
/*   Updated: 2025/12/01 12:57:19 by amigdadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h> /* only for the test main below */
char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	len;
	size_t	i;

	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	dup = (char *)malloc(len + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		dup[i] = s1[i];
		i++;
	}
	return (dup);
}

/*
#include <stdio.h>

int	main(void)
{
	const char	*src = "hello world";
	char		*out;

	out = ft_strdup(src);
	if (!out)
	{
		printf("allocation failed\n");
		return (1);
	}
	printf("src: '%s'\ncopy: '%s'\n", src, out);
	free(out);
	return (0);
}
*/
