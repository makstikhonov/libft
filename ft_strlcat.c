/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 10:34:19 by max               #+#    #+#             */
/*   Updated: 2020/11/01 13:19:46 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t dstsize)
{
	size_t i;
    size_t j;
	size_t dst_length;
    size_t src_length;

	i = ft_strlen(dest);
    j = 0;

    dst_length = ft_strlen(dest);
    src_length = ft_strlen(src);
    
    if (dstsize < dst_length + 1)
        return(src_length + dstsize);
    if (dstsize > dst_length + 1)
    {
        while (i < dstsize - 1)
        {
            dest[i] = src[j];
            i++;
            j++;
        }    
        dest[i] = '\0';
        
    }
	
	return (dst_length + src_length);
}