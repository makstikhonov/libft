/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 15:48:56 by max               #+#    #+#             */
/*   Updated: 2020/11/03 12:45:42 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *p;
    unsigned int length;
    unsigned int i;

    i = 0;
    if (!ft_strlen((char *)s))
        return(NULL);
    
        
    length = ft_strlen((char *)s) - start;
   
    if (length > len)
        length = len;
    
    if (start >= (unsigned int)ft_strlen((char *)s))
        length = 0;

    if ((p = malloc(sizeof(char) * (length + 1))) == NULL)
        return (NULL);
    
    while(i < length )
    {
        p[i] = s[start + i];
        i++;
    }
    p[i] = '\0';
    
    return(p);
}
/*
int main()
{
    printf("\n%s", ft_substr("0123456789", 1, 7));
    return(0);
}
*/