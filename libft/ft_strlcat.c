/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:51:18 by migmarti          #+#    #+#             */
/*   Updated: 2022/11/14 17:06:30 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strlcat() function appends the NUL-terminated string src to the end
of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-termi
nating the result. */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	x;
	size_t	i;

	if (size == 0)
		return (ft_strlen(src));
	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	x = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0' && x + 1 < size)
	{
		dst[x] = src[i];
		x++;
		i++;
	}
	dst[x] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
