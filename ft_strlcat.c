/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <manuelma@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 09:50:54 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/14 15:53:20 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	i;

	len_dst = ft_strlen(dst);
	i = 0;
	if (size <= len_dst)
		return (size + ft_strlen(src));
	while (++i < (size - len_dst) && src[i - 1])
		dst[len_dst + i - 1] = src[i - 1];
	dst[len_dst + i - 1] = '\0';
	return (len_dst + ft_strlen(src));
}
/*
//Test
#include <stdio.h>
#include <string.h>

int	main()
{
	char	src[250] = "source de longueur 21";
	char	dest[250] = "destination de longueur 26";
	char	src2[250] = "source de longueur 21";
	char	dest2[250] = "destination de longueur 26";

	printf("rl avant s:%s d:%s\n", src, dest);
	printf("return value:%ld\n", strlcat(dest, src, 200));
	printf("rl apres s:%s d:%s\n\n", src, dest);
	printf("ft avant s:%s d:%s\n", src2, dest2);
	printf("return value:%ld\n", ft_strlcat(dest2, src2, 200));
	printf("ft apres s:%s d:%s\n\n", src2, dest2);
	return (0);
}
*/
