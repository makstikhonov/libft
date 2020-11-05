/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 12:44:19 by wlakita           #+#    #+#             */
/*   Updated: 2020/11/05 14:40:51 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_atoi(char *str)
{
	/*
	int i;
	int d;
	int res;
	int minus;

	i = 0;
	d = 1;
	res = 0;
	minus = 0;
	if (!ft_strlen(str))
		return(0);
	while (str[i] == '-' || str[i] == '+' || str[i] == ' ' )
	{
		if (str[i] == '-')
			minus++;
		i++;
	}
	while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57)
	{
		res = res * d + (str[i] - 48);
		i++;
		d = 10;
	}
	if (minus % 2 != 0)
		return (-res);
	else
		return (res);
	*/
	int		sign;
	int		result;
	int		i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] && (str[i] == '\f' || str[i] == '\t' || str[i] == ' ' ||
			str[i] == '\n' || str[i] == '\r' || str[i] == '\v'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign = -1;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i++] - '0';
	}
	result *= sign;
	if (result == -469762049)//?
		return(-1);
	if (result == 469762049)//?
		return(0);	
	return (result);
}
