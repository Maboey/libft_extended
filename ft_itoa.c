/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <manuelma@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 19:07:55 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/11 20:48:29 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	abs_value(int nbr)
{
	if (nbr < 0)
		nbr = -nbr;
	return (nbr);
}

static int	len_of_converted_int_in_char(int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (2);
	if (nbr < 0)
		len++;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (++len);
}

char	*ft_itoa(int n)
{
	int				len;
	int				temp_n;
	char			*output;
	unsigned int	abs_n;

	temp_n = n;
	len = len_of_converted_int_in_char(n);
	output = malloc(len * sizeof(char));
	if (!output)
		return (NULL);
	len--;
	output[0] = '0';
	output[len] = '\0';
	len--;
	abs_n = abs_value(n);
	while (abs_n)
	{
		output[len] = (abs_n % 10) + '0';
		len--;
		abs_n /= 10;
	}
	if (temp_n < 0)
		output[len] = '-';
	return (output);
}
/*
//test
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	nbr;

	if (ac == 2)
	{
		//test of len_to_write
		nbr = atoi(av[1]);
		printf("len of: %d = %d\n", nbr, len_of_converted_int_in_char(nbr));
		//test of ft_itoa
		printf("itoa result =%s\n", ft_itoa(nbr));
		return(0);
	}
	return (-1);
}
// ===== len_of_converted_int_in_char =====
// retourne le nombre de char necessaires pour ecrire nbr
// (signe '-' et '\0' compris)
*/
