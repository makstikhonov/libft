/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 12:46:21 by max               #+#    #+#             */
/*   Updated: 2020/11/11 12:55:55 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_counts_words(char *s, char c)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			j++;
			while (s[i] == c)
				i++;
		}
		i++;
	}
	return (j + 1);
}

static char		**ft_add_to_array(char *s, char **p, char c)
{
	size_t	i;
	size_t	j;
	size_t	z;

	j = 0;
	i = 0;
	z = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] == c || i == ft_strlen(s))
		{
			if ((p[z] = (char *)malloc(sizeof(char) * (j + 1))) == NULL)
				return (NULL);
			p[z] = ft_substr(s, i - j, j);
			z++;
		}
		while (s[i] == c)
		{
			i++;
			j = 0;
		}
		i++;
		j++;
	}
	return (p);
}

char			**ft_split(char const *st, char c)
{
	size_t	j;
	char	**p;
	char	*s;

	if (!st || !c)
		return (NULL);
	if ((s = ft_strtrim((char *)st, &c)) == NULL)
		return (NULL);
	j = ft_counts_words(s, c);
	if ((p = (char **)malloc(sizeof(char *) * (j + 1))) == NULL)
		return (NULL);
	p[j] = NULL;
	return (ft_add_to_array(s, p, c));
}
