/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 22:30:48 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/08 16:36:01 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len_s1;
	int		len_s2;
	char	*output;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	output = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (!output)
		return (NULL);
	ft_bzero(output, len_s1 + len_s2 + 1);
	ft_strlcat(output, s1, len_s1 + 1);
	ft_strlcat(output, s2, len_s2 + len_s1 + 1);
	return (output);
}
/*
//test
#include <stdio.h>

int	main(int ac, char **av)
{
	char	*str;

	if (ac == 3)
	{
		printf("first  str:%s\n", av[1]);
		printf("second str:%s\n", av[2]);
		str = ft_strjoin(av[1], av[2]);
		printf("result    :%s\n", str);
	}
}
*/
