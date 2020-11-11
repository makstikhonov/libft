/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:06:05 by max               #+#    #+#             */
/*   Updated: 2020/11/10 23:31:00 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	length1;
	size_t	length2;
	size_t	length;
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	length1 = ft_strlen(s1);
	length2 = ft_strlen(s2);
	length = length1 + length2;
	if ((p = malloc(sizeof(char) * (length + 1))) == NULL)
		return (NULL);
	while (i < length1)
	{
		p[i] = s1[i];
		i++;
	}
	i = 0;
	while (i + length1 < length)
	{
		p[i + length1] = s2[i];
		i++;
	}
	p[i + length1] = '\0';
	return (p);
}
