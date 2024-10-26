/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <manuelma@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:05:19 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/22 23:59:22 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp( const char *s1, const char *s2, size_t n)
{
	if (n != 0)
	{
		n--;
		while (*s1 && n--)
		{
			if (*s1 != *s2)
				return ((unsigned char)*s1 - (unsigned char)*s2);
			s1++;
			s2++;
		}
		return ((unsigned char)*s1 - (unsigned char)*s2);
	}
	return (0);
}
/*
//test2
#include <string.h>
#include <stdio.h>

int	main()
{
	printf("rl result:%d\n", strncmp("test\200", "test\0", 6));
	printf("ft result:%d\n", ft_strncmp("test\200", "test\0", 6));
}
*/
/*
//test
#include <string.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int	length;

	if (ac == 3)
	{
		length = 0;
		while ((size_t)length <= ft_strlen(av[1]))
		{
			printf("length:%d\n", length);
			printf("rl_result :%d\n", strncmp(av[1], av[2], length));
			printf("ft_result :%d\n\n", ft_strncmp(av[1], av[2], length));
			length++;
		}
	}
	return (0);
}
*/
