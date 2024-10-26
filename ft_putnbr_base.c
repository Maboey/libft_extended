/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 00:05:19 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/26 15:57:50 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	recursive_print(unsigned long long int nbr, char *base)
{
	char				print;
	unsigned long long	reste;
	int					i;

	i = 0;
	print = base[nbr % ft_strlen(base)];
	reste = nbr / ft_strlen(base);
	if (reste > 0)
		i += recursive_print(reste, base);
	write(1, &print, 1);
	i++;
	return (i);
}

int	ft_putnbr_base(long long int nbr, char *base)
{
	int	print_len;

	print_len = 0;
	if (nbr < 0)
	{
		print_len += write(1, "-", 1);
		print_len += recursive_print(-nbr, base);
	}
	else
		print_len += recursive_print(nbr, base);
	return (print_len);
}
