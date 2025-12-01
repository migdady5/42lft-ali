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

char *ft_strdup(const char *s1)
{
    char *dup;
    size_t len;

    if (!s1)
        return (NULL);
    len = ft_strlen(s1);
    dup = (char *)malloc(len + 1);
    if (dup == NULL)
        return (NULL);
    /* manual copy instead of using strcpy */
    for (size_t i = 0; i <= len; i++)
        dup[i] = s1[i];
    return (dup);
}

/* simple test main */
/*int main(void)
{
    const char *src = "hello world";
    char *out = ft_strdup(src);
    if (!out)
    {
        printf("allocation failed\n");
        return (1);
    }
    printf("src: '%s'\ncopy: '%s'\n", src, out);
    free(out);
    return (0);
}*/
