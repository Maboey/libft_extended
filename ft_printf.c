/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <manuelma@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:29:54 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/26 16:14:17 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	print_choice(char c, va_list args, int len_count)
{
	if (c == 'c')
		len_count += printchar(va_arg(args, int));
	if (c == 's')
		len_count += printstr(va_arg(args, char *));
	if (c == 'p')
		len_count += printptr(va_arg(args, void *));
	if (c == 'd' || c == 'i')
		len_count += ft_putnbr_base(va_arg(args, int), "0123456789");
	if (c == 'u')
		len_count += ft_putnbr_base(va_arg(args, unsigned int), \
				"0123456789");
	if (c == 'x')
		len_count += ft_putnbr_base(va_arg(args, unsigned int), \
				"0123456789abcdef");
	if (c == 'X')
		len_count += ft_putnbr_base(va_arg(args, unsigned int), \
				"0123456789ABCDEF");
	if (c == '%')
		len_count += write(1, &c, 1);
	return (len_count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len_count;

	va_start(args, str);
	len_count = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			len_count = print_choice(*str, args, len_count);
		}
		else
		{
			write(1, str, 1);
			len_count++;
		}
		str++;
	}
	va_end(args);
	return (len_count);
}
