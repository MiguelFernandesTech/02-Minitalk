/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:19:47 by migmarti          #+#    #+#             */
/*   Updated: 2022/12/28 14:24:42 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* %c */
int	ft_print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_check_specifier(char c, va_list args)
{
	int	print_length;

	print_length = 0;
	if (c == 'c')
		print_length = ft_print_char(va_arg(args, int));
	else if (c == '%')
		print_length = write(1, "%", 1);
	else if (c == 's')
		print_length = ft_print_string(va_arg(args, char *));
	else if (c == 'i' || c == 'd')
		print_length = ft_print_numb(va_arg(args, int));
	else if (c == 'u')
		print_length = ft_print_unsigned(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		print_length = ft_print_hexadecimal(va_arg(args, unsigned int), c);
	else if (c == 'p')
		print_length = ft_print_pointer(va_arg(args, unsigned long));
	return (print_length);
}

int	ft_printf(const char *s, ...)
{
	va_list		args;
	int			print_length;
	int			i;

	i = 0;
	print_length = 0;
	va_start(args, s);
	while (s[i] != '\0')
	{
		if (s[i] != '%')
			print_length += write(1, (s + i), 1);
		else
		{
			i++;
			print_length += ft_check_specifier(s[i], args);
		}
		i++;
	}
	va_end (args);
	return (print_length);
}
