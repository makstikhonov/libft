/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 20:44:56 by wlakita           #+#    #+#             */
/*   Updated: 2020/10/31 15:47:54 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src, size_t dstsize)
{
	int a;

	a = 0;
	while (src[a] != '\0' || a < dstsize - 1)
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

int main(void)
{
	char a[] = "123";
	char b[] = "abc";

	printf("%s",ft_strcpy( a, b, 3 ) );

	return(0);
}

