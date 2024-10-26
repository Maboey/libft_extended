/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <manuelma@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 13:58:27 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/06 15:50:44 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*output;
	int		produit;

	produit = count * size;
	output = malloc(produit);
	if (output)
		ft_bzero(output, produit);
	return (output);
}
/*
//test
#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int	*test_rl;
	int	*test_ft;
	int	size;
	int	i;

	if (ac == 2)
	{
		size = atoi(av[1]) * sizeof(int);
		printf("trying to allocate %d bytes\n", size);

		i = 0;
		printf("rl add:%ls\n", test_rl = (int *)calloc(size, sizeof(int)));
		while (i <= size)
		{
			printf("rl[%d] = %d\n", i, test_rl[i]);
			i++;
		}
		printf("\n");

		i = 0;
		printf("ft add:%ls\n", test_ft = (int *)ft_calloc(size, sizeof(int)));
		while (i <= size)
		{
			printf("ft[%d] = %d\n", i, test_ft[i]);
			i++;
		}
		free(test_rl);
		free(test_ft);
	}
}
*/
