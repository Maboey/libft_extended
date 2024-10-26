/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:00:21 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/01 15:49:05 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
//test
#include <ctype.h>
#include <stdio.h>

int main()
{
	int	c;

	c = -5;
	while (c <= 132)
	{
		printf("isascii    input:%d output:%d\n", c, isascii(c));
		printf("ft_isascii input:%d output:%d\n", c, ft_isascii(c));
		if (isascii(c) == ft_isascii(c))
			printf("match ✅");
		else
			printf("ERROR ❌");
		printf("\n\n");
		c++;
	}
	return (0);
}
*/
