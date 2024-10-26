/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:17:11 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/01 15:37:10 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}
/*
//Test
#include <ctype.h>
#include <stdio.h>

int main()
{
    int c;

	c = 0;
	while (c <= 127)
	{
		printf("- isprint    input :%s output :%d\n", (char *)&c, isprint(c));
		printf("- ft_isprint input :%s output :%d\n", (char *)&c, ft_isprint(c));
		printf("\n\n");
		c++;
	}
    return (0);
}
*/
