/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 12:47:35 by migmarti          #+#    #+#             */
/*   Updated: 2022/11/21 14:35:01 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
output string to given file
Outputs the string ’s’ to the given file descriptor.
*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s || !fd)
		return ;
	while (s[i])
		write(fd, &s[i++], 1);
}
/*
int		main()
{
	ft_putstr_fd("Texto Aqui!!", 1);
	return(0);
}
*/
