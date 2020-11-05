/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 09:22:45 by max               #+#    #+#             */
/*   Updated: 2020/11/02 19:20:26 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char * ft_strnstr(const char *haystack, const char *needle, size_t len)
{

}
*/
char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
    if (!ft_strlen(to_find))
        return(str);
	while (str[i] != '\0' && i < len)
	{
		while (str[i + j] == to_find[j] && (i + j) < len)
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}