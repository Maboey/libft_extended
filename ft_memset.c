/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:51:45 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/04 14:53:27 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	void	*a;

	a = dest;
	while (count--)
	{
		*(char *)dest = (char)c;
		dest++;
	}
	return (a);
}
/*
//test
#include <string.h>
#include <stdio.h>

int	main()
{
	char	str[50] = "Salut je m'apelle Manuel";
	char	str2[50] = "Salut je m'apelle Manuel";

	printf("memset    in:%s, *, 5\n", str);
	printf("memset    out:%s\n\n", (char*)memset(str, '*', 5));
	printf("ft_memset in:%s, *, 5\n", str2);
	printf("ft_memset out:%s\n\n", (char*)ft_memset(str2, '*', 5));
	return (0);
}
*/
