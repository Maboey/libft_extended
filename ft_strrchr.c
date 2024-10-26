/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <manuelma@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:23:24 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/14 14:47:08 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
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
		printf("%s is at %s in %s\n", av[2], strrchr(av[1], *av[2]), av[1]);
		printf("%s is at %s in %s\n", av[2], ft_strrchr(av[1], *av[2]), av[1]);
	}
	return (0);
}
*/
