/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:42:55 by migmarti          #+#    #+#             */
/*   Updated: 2022/11/22 10:00:04 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*concatenate two strings into a new string (with malloc).*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*s3;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	s3 = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s3)
		return (0);
	while (s1[i] != '\0')
	{
		s3[j++] = s1[i++];
	}
	i = 0;
	while (s2[i] != '\0')
	{
		s3[j++] = s2[i++];
	}
	s3[j] = '\0';
	return (s3);
}
/*
#include <stdio.h>
int main()
{
    char    str1[] = "adoro aquelas bolhas ";
    char    str2[] = "de sabao";
    printf("%s\n", ft_strjoin(str1, str2));
    return(0);
}
*/
