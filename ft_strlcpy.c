/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:49:05 by max               #+#    #+#             */
/*   Updated: 2020/11/09 12:21:23 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t a;

	a = 0;
	if (!dstsize)
		return (ft_strlen(src));
	while ((char)src[a] != '\0' && a < dstsize - 1)
	{
		dest[a] = (char)src[a];
		a++;
	}
	dest[a] = '\0';
	return (ft_strlen(src));
}
