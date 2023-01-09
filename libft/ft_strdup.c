/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 12:52:10 by migmarti          #+#    #+#             */
/*   Updated: 2022/11/14 17:22:06 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* save a copy of a string with malloc */
/* the strdup function allocates sufficient memory for a copy
of string s1, does the copy and returns the pointer to it.*/
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*s2;

	i = 0;
	s2 = malloc(sizeof(char ) * (ft_strlen(s) + 1));
	if (!s2)
		return (0);
	while (s[i])
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
   char *str = "Helloworld";
   char *result;
   result = ft_strdup(str);
   printf("The string : %s", result);
   return 0;
}
*/
