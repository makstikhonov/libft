/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 15:05:00 by wlakita           #+#    #+#             */
/*   Updated: 2020/11/02 20:38:52 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"



char	*ft_strchr(char *str, int c)
{
	int i;
    //int z;
	i = 0;
    
	//z = ft_strlen(str);
    while (str[i] != '\0')
    //while (i < ft_strlen(str))
	{
		if (str[i] == c)
			return (&str[i]);
        i++;
	}
	if (str[i] == c)
		return (&str[i]);
	return (0);
}
/*
int main()
{
	char str[] = "1236565613";
	int to_find = 51;
	printf("%s", ft_strchr(str, to_find));
}*/