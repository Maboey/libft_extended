/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 22:11:38 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/11 22:27:01 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	len;
	unsigned int	i;

	len = (unsigned int)ft_strlen(s);
	i = 0;
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
}
/*
// test
#include <stdio.h>

void	increment_char_by_index(unsigned int i ,char* c)
{
	*c += i;
}
int	main()
{
	char	str[5] = "aaaa";

	ft_striteri(str, increment_char_by_index);
	printf("result:%s\n", str);
	return (0);
}
*/
