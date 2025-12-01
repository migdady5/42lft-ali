/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amigdadi <amigdadi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 12:44:49 by amigdadi          #+#    #+#             */
/*   Updated: 2025/12/01 12:45:26 by amigdadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    char *last_occurrence = NULL;

    while (*s)
    {
        if (*s == (char)c)
            last_occurrence = (char *)s;
        s++;
    }

    if (c == '\0')
        return (char *)s;

    return last_occurrence;
}