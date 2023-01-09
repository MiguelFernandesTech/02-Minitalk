/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 09:10:52 by migmarti          #+#    #+#             */
/*   Updated: 2022/11/12 15:33:09 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Create new string from modifying string with specified function
Applies the function ’f’ to each character of the string ’s’ to create
a new string (with malloc(3)) resulting from successive applications of ’f’.*/
/*f is a pointer to the function*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	int				i;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
#include <string.h>
char my_func(unsigned int i, char str)
{
     printf("My inner function: index = %d and %c\n", i, str);
     return str - 32;
}

int main()
{
     char str[10] = "hello.";
     printf("The result is %s\n", str);
     char *result = ft_strmapi(str, my_func);
     printf("The result is %s\n", result);
     return 0;
}
*/
