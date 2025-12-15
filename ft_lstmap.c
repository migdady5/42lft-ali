/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amigdadi <amigdadi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 02:21:08 by amigdadi          #+#    #+#             */
/*   Updated: 2025/12/16 02:21:08 by amigdadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list	*new_list;
    t_list	*new_node;
    void	*new_content;

    if (lst == NULL || f == NULL)
        return (NULL);
    new_list = NULL;
    while (lst != NULL)
    {
        new_content = f(lst->content);
        new_node = ft_lstnew(new_content);
        if (new_node == NULL)
        {
            del(new_content);
            ft_lstclear(&new_list, del);
            return (NULL);
        }
        ft_lstadd_back(&new_list, new_node);
        lst = lst->next;
    }
    return (new_list);
}