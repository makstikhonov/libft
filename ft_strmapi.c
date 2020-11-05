/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 17:30:09 by max               #+#    #+#             */
/*   Updated: 2020/11/03 18:18:33 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *p;
    unsigned int i;
    int length;

    i = 0;
    length = ft_strlen((char *) s);
    if ((p = malloc(sizeof(char) * (length + 1))) == NULL)
		return (NULL);

    while((char)s[i])
    {
        p[i] = (*f)(i, (char)s[i]);
        i++;
    }
    p[i] = '\0';
    
    return(p);
    
}