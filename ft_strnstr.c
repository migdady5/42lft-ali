/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amigdadi <amigdadi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 12:44:45 by amigdadi          #+#    #+#             */
/*   Updated: 2025/12/01 12:45:25 by amigdadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    if (!*needle)
        return ((char *)haystack);
    for (i = 0; haystack[i] && i < len; i++)
    {
        for (j = 0; needle[j] && haystack[i + j] == needle[j] && (i + j) < len; j++)
            ;
        if (!needle[j])
            return ((char *)&haystack[i]);
    }
    return (NULL);
}