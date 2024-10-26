/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <manuelma@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 03:28:19 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/08 17:51:34 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (!*little)
		return ((char *)big);
	if (!*big)
		return (NULL);
	while (len)
	{
		i = 0;
		while (big[i] && little[i] && big[i] == little[i])
		{
			if (!little[i + 1] && i < len)
				return ((char *)big);
			i++;
		}
		if (*big)
			big++;
		len--;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int	len;
	int	len_max;

	if (ac == 3)
	{
		len = 0;
		len_max = strlen(av[1]);
		while (len <= len_max)
		{
			printf("big = %s, little = %s len = %d\n", av[1], av[2], len);
			printf("result real:%s\n", strnstr(av[1], av[2], len));
			printf("result ft  :%s\n", ft_strnstr(av[1], av[2], len));
			len++;
		}
	}
}
*/
