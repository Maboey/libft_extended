/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <manuelma@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 21:38:36 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/07 15:20:26 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove( void *destination, const void *source, size_t size)
{
	void	*a;

	if (!destination && !source)
		return (destination);
	a = destination;
	if (destination < source)
	{
		while (size--)
			*(char *)destination++ = *(char *)source++;
	}
	else
	{
		destination += (size - 1);
		source += (size - 1);
		while (size--)
		{
			*(char *)destination = *(char *)source;
			destination--;
			source--;
		}
	}
	return (a);
}
/*
//Test
#include <stdio.h>
#include <string.h>
#include <limits.h>

int	main()
{
	int	t[7] = {10, INT_MAX, 8, 0, INT_MIN, 50, 34};
	int	p[7] = {10, INT_MAX, 8, 0, INT_MIN, 50, 34};
	int source_pos;
	int dest_pos;
	int size_cpy;

	source_pos = 1;
	dest_pos = 2;
	size_cpy = 2;
	printf("before    memmove t[0]:%d t[1]:%d t[2]:%d\n", t[0], t[1], t[2]);
	memmove(&t[dest_pos], &t[source_pos], size_cpy * sizeof(int));
	printf(" after    memmove t[0]:%d t[1]:%d t[2]:%d\n", t[0], t[1], t[2]);

	printf("\n");

	printf("before ft_memmove p[0]:%d p[1]:%d p[2]:%d\n", p[0], p[1], p[2]);
	ft_memmove(&p[dest_pos], &p[source_pos], size_cpy * sizeof(int));
	printf(" after ft_memmove p[0]:%d p[1]:%d p[2]:%d\n", p[0], p[1], p[2]);
	return (0);
}
*/
