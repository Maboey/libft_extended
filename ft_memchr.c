/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <manuelma@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:10:53 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/06 12:38:00 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
	}
	return (NULL);
}
/*
//test
#include <string.h>
#include <stdio.h>

int	main()
{
	//							 /-> 00000000 00000000 00000001 00000000
	int	memoryBlock[5] = {10,10,256,10,10};
	int	searchedChar = 1; // 00000000 00000000 00000000 00000001
	int size = 0;

	while (size <= 20)
	{
		printf("size = %d\n", size);
		printf("rl result =%p\n", memchr(memoryBlock, searchedChar, size));
		printf("ft result =%p\n\n", ft_memchr(memoryBlock, searchedChar, size));
		size++;
	}
	return (0);
}
*/
