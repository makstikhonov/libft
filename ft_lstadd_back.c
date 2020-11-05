/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 11:33:27 by max               #+#    #+#             */
/*   Updated: 2020/11/05 12:56:25 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;
    
    if (lst == NULL || new == NULL)
        return;
	if (*lst == NULL)
	{ 
		*lst = new;
		return ;
	}
        last = ft_lstlast(*lst);
        last->next = new;   

}
