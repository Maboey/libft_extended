/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 22:28:42 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/11 22:36:37 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
//test
int	main()
{
	char	str[13] = "Ca marche :D";
	int		i;

	i = 0;
	while(str[i])
	{
		ft_putchar_fd(str[i], 1);
		i++;
	}
	return (0);
}
*/
