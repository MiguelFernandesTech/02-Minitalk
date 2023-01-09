/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:41:55 by migmarti          #+#    #+#             */
/*   Updated: 2022/11/12 12:35:23 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
c: The character to output.
fd: The file descriptor on which to write.
Outputs the character ’c’ to the given file
descriptor.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
