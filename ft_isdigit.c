/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <manuelma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 23:45:17 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/05 13:31:59 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}
/*
//Test
#include <stdio.h>
int main(int ac, char **av)
{
	if (ac > 1)
		printf("1 is digit, 0 isn't digit, result:%d\n", ft_isdigit(*av[1]));
	return 0;
}*/
