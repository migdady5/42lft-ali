/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amigdadi <amigdadi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 02:18:03 by amigdadi          #+#    #+#             */
/*   Updated: 2025/12/16 02:18:03 by amigdadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int	ft_lstsize(t_list *lst)
{
    int	count;

    count = 0;
    while (lst != NULL)
    {
        count++;
        lst = lst->next;
    }
    return (count);
}