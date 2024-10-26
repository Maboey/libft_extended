/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:38:56 by manuelma          #+#    #+#             */
/*   Updated: 2024/09/03 15:49:45 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	result = ft_recursive_factorial(nb - 1);
	result *= nb;
	return (result);
}
/*
#include <stdio.h>
int main()
{
	printf("factorial of 5 = %d\n", ft_recursive_factorial(5));
}
*/
/*
 * 00! = 01
 * 01! = 01 * 00! -> 01 * !(01 - 01)
 * 02! = 02 * 01! -> 02 * !(02 - 01)
 * 03! = 03 * 02! -> 03 * !(03 - 01)
 *                .
 *                .
 *                .
 *                .
 * 25! = 25 * 24! -> 25 * !(25 - 01)
 */
