/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <manuelma@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 03:25:51 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/06 19:16:24 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*output;

	len = ft_strlen(s1) + 1;
	output = malloc(sizeof(char) * (len));
	if (output == NULL)
		return (NULL);
	ft_strlcpy(output, s1, len);
	return (output);
}
/*
//test
#include <stdio.h>

int	main(int ac, char **av)
{
	char	*result;

	if (ac == 2)
	{
		result = strdup(av[1]);
		printf("rl :%s\n\n", result);
		free(result);
		result = ft_strdup(av[1]);
		printf("ft :%s\n\n", result);
		free(result);
	}
}
*/
