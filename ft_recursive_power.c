/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:37:31 by manuelma          #+#    #+#             */
/*   Updated: 2024/09/03 17:46:50 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	power--;
	if (power > 0)
		nb *= ft_recursive_power(nb, power);
	return (nb);
}
/*
#include <stdio.h>
int main ()
{
	printf("result is %d\n", ft_recursive_power(2,3));
}
*/
/*
 * nbr = 2, power = 3
 *											 |   1er   |  2eme  |  3eme |sens|
 *											  ================================
 *	power--;								 |  3 -> 2 | 2 -> 1 | 1 -> 0| -> |
 *	if (power > 0)							 |    = 2  |   = 1  |  = 0  | -> |
 *		nb *= ft_recursive_power(nb, power); | 2 *= 4  | 2 *= 2 | rien  | <- |
 *	return (nb) 							 | nb = 8  | nb = 4 | nb = 2| <- |
*/
