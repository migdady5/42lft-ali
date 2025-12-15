/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amigdadi <amigdadi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 02:20:44 by amigdadi          #+#    #+#             */
/*   Updated: 2025/12/16 02:20:44 by amigdadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
    while (lst != NULL)
    {
        f(lst->content);
        lst = lst->next;
    }
}