/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 14:40:41 by max               #+#    #+#             */
/*   Updated: 2020/11/10 11:28:09 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_n_len(int n)
{
	int		i;

	i = 1;
	if (n < 0)
		i++;
	while (n /= 10)
		i++;
	return (i);
}

char		*ft_itoa(int n)
{
	unsigned int	nb;
	char			*p;
	size_t			length;

	length = ft_n_len(n);
	nb = n;
	if (n < 0)
		nb = -n;
	if ((p = malloc(sizeof(char) * (length + 1))) == NULL)
		return (NULL);
	p[length] = '\0';
	length = length - 1;
	p[length] = nb % 10 + '0';
	while (nb /= 10)
	{
		length = length - 1;
		p[length] = nb % 10 + '0';
	}
	if (n < 0)
		p[0] = '-';
	return (p);
}
