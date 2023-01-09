/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 09:25:21 by migmarti          #+#    #+#             */
/*   Updated: 2022/11/12 15:00:46 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* locate character in string (last occurence)
The strrchr() function locates the last occurrence of c (converted to a
**	char) in the string s*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main () {
   const char str[] = "This-is-just-a-test-string";
   const char ch = '-';
   char *p;

   p = ft_strrchr(str, ch);
   printf("String starting from last occurrence of %c is: %s\n", ch, p);

   return (0);
}
*/
