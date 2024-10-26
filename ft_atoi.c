/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <manuelma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:02:19 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/06 15:49:35 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	output;
	int				sign;

	sign = 1;
	output = 0;
	while (*str == '\t' || *str == '\n' || *str == '\r' || \
			*str == '\v' || *str == '\f' || *str == ' ')
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	if (!ft_isdigit(*str))
		return (0);
	while (ft_isdigit(*str))
	{
		output *= 10;
		output += (*str - '0');
		str++;
	}
	return ((int)(sign * output));
}
/*
//Test
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac > 1)
	{
		printf("rl :%d\n", atoi(av[1]));
		printf("ft :%d\n", ft_atoi(av[1]));
	}
}
*/
