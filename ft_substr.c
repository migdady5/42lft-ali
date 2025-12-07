/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amigdadi <amigdadi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 17:32:16 by amigdadi          #+#    #+#             */
/*   Updated: 2025/12/07 17:32:16 by amigdadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    size_t  i;
    size_t  s_len;
    if(!s)
        return (NULL);
    s_len = ft_strlen(s);
    if(start >= s_len)
        return (null);
    if(len > s_len - start)
        len = s_len - start;
    str = (char *)malloc(sizeof(char) * (len + 1));
}


