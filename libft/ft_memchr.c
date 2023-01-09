/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 10:02:58 by migmarti          #+#    #+#             */
/*   Updated: 2022/11/22 10:08:55 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memchr() function locates the first occurrence of c
(converted to an unsigned char) in string s.
Function returns a pointer to the matching byte or NUll if the
character does not occur in the given memory area */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main(int argc , char *argv[])
{
	int arr1[] = {3, 4};
	int arr2[] = {1, 2};
the array we search next the value we want to find
	if(ft_memchr(arr1, 1, sizeof(int) * 2))
	{
		printf("Found the byte\n");
	}
	else
	{
		printf("Did not find the byte\n");
	}
	return (0);
}
*/
