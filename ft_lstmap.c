/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 18:35:28 by max               #+#    #+#             */
/*   Updated: 2020/11/05 08:41:15 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list *elem;
    //elem = lst;
	if (lst && f)
	{
        
		while (lst)
			{
                if (f(lst->content))
                {
                
                    ft_lstadd_front(elem, ft_lstnew(f(lst->content)));
                      
                }
                lst = lst->next;
            }
	}  
}