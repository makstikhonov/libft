/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 17:30:09 by max               #+#    #+#             */
/*   Updated: 2020/11/10 12:23:21 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*p;

	i = 0;
	if ((p = malloc(sizeof(char) * (ft_strlen(s) + 1))) == NULL)
		return (NULL);
	while ((char)s[i])
	{
		p[i] = (*f)(i, (char)s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
