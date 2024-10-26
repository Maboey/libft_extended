/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <manuelma@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 05:07:49 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/08 23:09:14 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	void	*a;

	if (!destination && !source)
		return (destination);
	a = destination;
	while (size--)
	{
		*(unsigned char *)destination = *(unsigned char *)source;
		destination++;
		source++;
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
	int	source[50] = {INT_MAX,2,2,2};
	int	dest[50] = {0,0,0,0,0};
	printf("before memcpy -> source[0]:%d dest[0]:%d", source[0], dest[0]);
	memcpy(dest, source, 4);
	printf("after memcpy -> source[0]:%d dest[0]:%d", source[0], dest[0]);
	return (0);
}
*/
