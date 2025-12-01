/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amigdadi <amigdadi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 12:43:16 by amigdadi          #+#    #+#             */
/*   Updated: 2025/12/01 12:45:56 by amigdadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *ptr = s;

    while (n--)
    {
        if (*ptr == (unsigned char)c)
            return (void *)ptr;
        ptr++;
    }
    return NULL;
}