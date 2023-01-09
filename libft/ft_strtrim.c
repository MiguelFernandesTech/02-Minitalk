/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:00:35 by migmarti          #+#    #+#             */
/*   Updated: 2022/11/12 15:04:29 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns a copy of ’s1’ with the
characters specified in ’set’ removed from the beginning and the
end of the string. */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		start;
	int		end;

	start = 0;
	if (!s1)
		return (0);
	end = ft_strlen((char *)s1);
	while (s1[start] && ft_strchr((char *)set, s1[start]))
		start++;
	while (end > start && ft_strchr((char *)set, s1[end - 1]))
		end--;
	result = ft_substr(s1, start, (end - start));
	return (result);
}
/*
#include <stdio.h>

int main()
{
	char str[] = "        eu sei que sim! ";
	printf("%s\n", ft_strtrim(str, " "));
	return(0);
}
*/
