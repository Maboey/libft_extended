/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printptr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <manuelma@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 05:00:17 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/26 16:04:06 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	printptr(void *ptr)
{
	unsigned long long	ptr_add;
	int					print_len;

	print_len = 0;
	ptr_add = (unsigned long long)ptr;
	print_len += write(1, "0x", 2);
	if (ptr == NULL)
		print_len += write(1, "0", 1);
	else
		print_len += recursive_print(ptr_add, "0123456789abcdef");
	return (print_len);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[6] = "salut";

	printptr(str);
	printf("\n%p\n", str);
	return (0);
}
*/
