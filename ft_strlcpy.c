/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <manuelma@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 09:50:54 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/07 16:21:38 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = ft_strlen(src);
	if (dstsize > 0)
	{
		dstsize--;
		while (dstsize-- > 0 && *src)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (len);
}
/*
//Test
#include <stdio.h>
#include <string.h>

int	main()
{
	char	src[50] = "source de longueur 21";
	char	dest[50] = "destination de longueur 26";
	char	src2[50] = "source de longueur 21";
	char	dest2[50] = "destination de longueur 26";

	printf("rl avant s:%s d:%s\n", src, dest);
	printf("return value:%ld\n", strlcpy(dest, src, 22));
	printf("rl apres s:%s d:%s\n\n", src, dest);
	printf("ft avant s:%s d:%s\n", src2, dest2);
	printf("return value:%ld\n", ft_strlcpy(dest2, src2, 22));
	printf("ft apres s:%s d:%s\n\n", src2, dest2);
	return (0);
}
*/
