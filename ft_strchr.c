/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <manuelma@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:57:55 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/06 15:36:05 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
/*
//test
#include <stdio.h>
#include <string.h>

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%s is at %s in %s\n", av[2], strchr(av[1], *av[2]), av[1]);
		printf("%s is at %s in %s\n", av[2], ft_strchr(av[1], *av[2]), av[1]);
	}
	return (0);
}
*/
