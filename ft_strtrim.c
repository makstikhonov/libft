/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:53:38 by max               #+#    #+#             */
/*   Updated: 2020/11/03 12:45:34 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static int is_symbol_exist(char s1, char *s2)
{
    int j;

    j= 0;
    while(s2[j])
    {
        if (s1 == s2[j])
            return(1);
        j++;
    }
    return(0);
}


char *ft_strtrim(char const *s1, char const *set)
{
    char *p;
    int i;
    int j;
    int length;
    
    if (!ft_strlen((char *)s1) || !ft_strlen((char *)set))
		return (ft_strdup("\0"));
    i = 0;
    length = ft_strlen((char *)s1);
    j = length - 1;

    while (is_symbol_exist( (char)s1[i], (char *)set ))
        i++;
    while (is_symbol_exist( (char)s1[j], (char *)set ))
        j--;

    if (i == length)
		return (ft_strdup("\0"));   
  

    if ((p = malloc(sizeof(char) * (j - i + 2))) == NULL)
        return (NULL);
    p = ft_substr(s1, i, (size_t)(j - i + 1));
    p[i+j+2] = '\0';
    return(p);
}