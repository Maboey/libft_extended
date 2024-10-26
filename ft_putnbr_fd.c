/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 22:51:12 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/11 23:06:43 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	print_nbr(int n, int fd)
{
	char			c;
	unsigned int	nbr;

	if (n < 0)
	{
		write(fd, "-", 1);
		nbr = (unsigned int)-n;
	}
	else
		nbr = (unsigned int)n;
	if (nbr)
	{
		c = (nbr % 10) + '0';
		nbr /= 10;
		print_nbr((int)nbr, fd);
		write(fd, &c, 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n)
		print_nbr(n, fd);
	else
		write(fd, "0", 1);
}
/*
//test
int	main(int ac, char **av)
{
	if (ac == 2)
		ft_putnbr_fd(atoi(av[1]), 1);
	return (0);
}
*/
