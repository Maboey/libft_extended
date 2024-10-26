/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <manuelma@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:53:46 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/07 16:37:30 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_temp;
	unsigned char	*s2_temp;

	s1_temp = (unsigned char *)s1;
	s2_temp = (unsigned char *)s2;
	while (n-- > 0)
	{
		if (*s1_temp != *s2_temp)
			return (*s1_temp - *s2_temp);
		s1_temp++;
		s2_temp++;
	}
	return (0);
}
/*
//test
#include <string.h>
#include <stdio.h>

int	main()
{
	int	memoryBlock1[5] = {10,10,15,10,10};
	int	memoryBlock2[5] = {10,10,10,10,10};
	int size = 0;

	while (size <= 20)
	{
		printf("size = %d\n", size);
		printf("rl result =%d\n", memcmp(memoryBlock1, memoryBlock2, size));
		printf("ft result =%d\n", ft_memcmp(memoryBlock1, memoryBlock2, size));
		size++;
	}
	return (0);
}
*/
