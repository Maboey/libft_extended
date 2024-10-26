/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <manuelma@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 05:16:40 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/05 14:24:44 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
//test
#include <stdio.h>

int	main(int ac, char **av)
{
	if(ac == 2)
		printf("%c\n", toupper(av[1][0]));
	return (0);
}
*/
