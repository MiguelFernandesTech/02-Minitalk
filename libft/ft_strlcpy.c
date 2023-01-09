/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:18:58 by migmarti          #+#    #+#             */
/*   Updated: 2022/11/03 18:56:10 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* the strlcpy() functions copy and concatenate strings respectively
 takes the full size of the buffer(not just the length
 Note that a byte for the NUL should be included in size.
 strlcpy() src must be NUL-terminated and for strlcat() both src and dst must
be NUL-terminated*/

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char *src, size_t size)
{
	size_t	x;
	size_t	i;

	x = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (x);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int	main()
{
	size_t size;

	size = 5;
	char src[] = "olaaaaa";
	char dst[] = "okllllllllllll";
	char src1[] = "olaaaaa";
	char dst2[] = "okllllllllllll";
	printf("%zu\n%s\n", ft_strlcpy(dst, src, size), dst);
	printf("%zu\n%s\n", strlcpy(dst2, src1, size), dst2);
	return(0);
}
*/
