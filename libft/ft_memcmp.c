/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 10:23:25 by migmarti          #+#    #+#             */
/*   Updated: 2022/11/12 15:11:40 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Function compares the first n bytes of the memory area s1 and s2 */
/* function returns an integer less than, equal, greater than
if the first n bytes of s1 is found */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ss1;
	const unsigned char	*ss2;
	int					i;

	i = 0;
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
		n--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	int	size;

	size = 4;
	(void) argc;
	printf("%d", ft_memcmp(argv[1], argv[2], size));
}
*/
