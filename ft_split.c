/* ************************************************************************** */
/*                                                                            */
/*      #                                                  :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 12:46:21 by max               #+#    #+#             */
/*   Updated: 2020/11/03 12:46:21 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char **ft_split(char const *s, char c)
{
    int i;
    int j;
    int z;
    //int last;
    char **p;

    i = 0;
    j = 0;
    z = 0;
    while((char)s[i])
    {
        if ((char)s[i] == c)
            j++;
        i++;
    }
    i = 0;

    p = (char **)malloc(sizeof(char *) * (j + 1));
    
    //printf("%d", j);
    j = 0;
    
    while(i <= ft_strlen((char *)s))
    {

        if ((char)s[i] == c || i == ft_strlen((char *)s))
        {   
            //if (i!=0)
        
            p[z] = (char *)malloc(sizeof(char) * (j + 1));
            p[z] = ft_substr(s, i - j, j);
            printf("%d ", i);
            j = 0;
            z++;
        }
        i++;
        j++;
    }
    return(p);
}
int main()
{
    int i;
    char **p;
    i = 0;

    p = ft_split("|||adfsdz|afgdfz|adfsz|afgz", '|');

    while (p[i])
    {
        printf("%s \n", p[i]);
        i++;
    
    }
    //printf("%s", p[0]);
}