/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 20:03:48 by migmarti          #+#    #+#             */
/*   Updated: 2022/11/14 17:23:47 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* extract substring from string you set 2 positions and
the code give you the words between the numbers you set*/
/*Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub;

	i = 0;
	j = 0;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			sub[j] = s[i];
			j++;
		}
	i++;
	}
	sub[j] = '\0';
	return (sub);
}
/*
#include <stdio.h>
#include <string.h>
 int main(void)
{
    char src[] = "substr function Implementation";
    int m = 7;
    int n = 12;

    char* dest = ft_substr(src, m, n);
    printf("%s\n", dest);
    return 0;
}
*/
