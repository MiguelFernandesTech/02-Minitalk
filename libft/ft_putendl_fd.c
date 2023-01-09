/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:44:44 by migmarti          #+#    #+#             */
/*   Updated: 2022/11/21 14:34:49 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Output string to given file with newline
Outputs the string ’s’ to the given file descriptor, followed by a
newline */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s || !fd)
		return ;
	while (s[i])
		write(fd, &s[i++], 1);
	write(fd, "\n", 1);
}
/*
int		main()
{
	ft_putendl_fd("Texto Aqui!!", 1);
	return(0);
}
*/
