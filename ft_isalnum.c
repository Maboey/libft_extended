/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <manuelma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:18:56 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/05 13:57:34 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}
/*
//Test
#include <stdio.h>
int main(int ac, char **av)
{
	if (ac > 1)
		printf("1 is, 0 isn't, result:%d\n", ft_isalnum(*av[1]));
}*/
