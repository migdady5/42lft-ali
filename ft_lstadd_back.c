/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amigdadi <amigdadi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 02:19:23 by amigdadi          #+#    #+#             */
/*   Updated: 2025/12/16 02:19:23 by amigdadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void	ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list	*last;

    if (lst == NULL || new == NULL)
        return ;
    if (*lst == NULL)
    {
        *lst = new;
        return ;
    }
    last = ft_lstlast(*lst);
    last->next = new;
}