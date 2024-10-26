/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <manuelma@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 05:16:40 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/05 14:25:34 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
//test
#include <stdio.h>

int	main(int ac, char **av)
{
	if(ac == 2)
		printf("%c\n", tolower(av[1][0]));
	return (0);
}
*/
