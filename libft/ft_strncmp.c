/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 09:45:41 by migmarti          #+#    #+#             */
/*   Updated: 2022/11/12 16:34:32 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* function compares 2 strings s1 and s2. and compares only n bytes
 of s1 and s2 return an integer less than, equal to, or greater than
 */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	a;

	a = 0;
	if (n == 0)
		return (0);
	while (s1[a] == s2[a] && s1[a] != '\0')
	{
		if (a < (n - 1))
			a++;
		else
			return (0);
	}
	return ((unsigned char)(s1[a]) - (unsigned char)(s2[a]));
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	int	size;

	size = 4;
	(void) argc;
	printf("%d", ft_strncmp(argv[1], argv[2], size));
}
*/
