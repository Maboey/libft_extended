/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <manuelma@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 19:17:22 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/14 16:16:34 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*output;

	if (start >= ft_strlen(s))
	{
		output = malloc(sizeof(char) * 1);
		if (!output)
			return (NULL);
		*output = '\0';
		return (output);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	output = malloc(sizeof(char) * (len + 1));
	if (!output)
		return (NULL);
	ft_strlcpy(output, s + start, len + 1);
	return (output);
}
/*
//Test
#include <stdio.h>

int	main()
{
	char	*str1 = "Bonjour je m'appelle Manuel";
	char	*str2;
	int		start = 8;
	int		len = 2;

	str2 = ft_substr(str1, start, len);
	printf("result:%s\n", str2);
	free(str2);
	return (0);
}
*/
