/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <manuelma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:01:34 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/06 15:50:20 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
//Test
#include <stdio.h>
int main(int ac, char **av)
{
	if (ac > 1)
		printf("1 is alpha, 0 is not alpha, result :%d\n", ft_isalpha(*av[1]));
}*/
