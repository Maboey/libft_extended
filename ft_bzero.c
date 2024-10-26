/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <manuelma@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 04:25:42 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/05 14:22:04 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	void	*a;

	a = s;
	while (n--)
	{
		*(char *)a = 0;
		a++;
	}
}
/*
//test
#include <string.h>
#include <stdio.h>

int	main()
{
	char	str[50] = "Salut je m'apelle Manuel";
	char	str2[50] = "Salut je m'apelle Manuel";

	printf("bzero    in:%s, 5\n", str);
	bzero(str, 5);
	printf("bzero    out:%s\n", str);
	printf("ft_bzero in:%s, 5\n", str2);
	bzero(str2, 5);
	printf("ft_bzero out:%s\n", str2);
	return (0);
}
*/
