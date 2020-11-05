/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 16:20:16 by max               #+#    #+#             */
/*   Updated: 2020/11/05 09:38:38 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *p;

    if (!sizeof(size) || !sizeof(count) )
        return (NULL);
    if ((p = malloc(size * count) ) == NULL)
        return (NULL);
    p = ft_memset(p, 0, count * size);
    
    return(p);
}
