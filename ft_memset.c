/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amigdadi <amigdadi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 12:44:00 by amigdadi          #+#    #+#             */
/*   Updated: 2025/12/01 12:45:51 by amigdadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *ptr = s;
    while (n--)
    {
        *ptr++ = (unsigned char)c;
    }
    return s;
}