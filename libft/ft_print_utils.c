/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:08:27 by migmarti          #+#    #+#             */
/*   Updated: 2022/12/06 11:58:24 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_string(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (s[i])
		write (1, &s[i++], 1);
	return (i);
}
/* %s */

int	ft_print_numb(long nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		nb *= -1;
		count += ft_print_char('-');
	}
	if (nb >= 10)
	{
		count += ft_print_numb(nb / 10);
		count += ft_print_numb(nb % 10);
	}
	if (nb < 10)
		count += ft_print_char(nb + 48);
	return (count);
}
/* %i, %d */

int	ft_print_unsigned(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb < 10)
		count += ft_print_char(nb + 48);
	if (nb >= 10)
	{
		count += ft_print_unsigned(nb / 10);
		count += ft_print_unsigned(nb % 10);
	}
	return (count);
}
/* %u */

int	ft_print_hexadecimal(unsigned long nb, char c)
{
	int		count;
	char	*hexa;

	count = 0;
	if (c == 'x')
		hexa = "0123456789abcdef";
	if (c == 'X')
		hexa = "0123456789ABCDEF";
	if (nb < 16)
		count += ft_print_char(hexa[nb]);
	if (nb >= 16)
	{
		count += ft_print_hexadecimal(nb / 16, c);
		count += ft_print_hexadecimal(nb % 16, c);
	}
	return (count);
}
/* %x, %X */

int	ft_print_pointer(unsigned long nb)
{
	int	count;

	count = 0;
	if (!nb)
		return (write(1, "(nil)", 5));
	else
		write(1, "0x", 2);
	count += ft_print_hexadecimal(nb, 'x');
	return (count + 2);
}
/* %p */
/* x para imprimir minuscula */
