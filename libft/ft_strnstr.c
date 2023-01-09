/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 12:36:48 by migmarti          #+#    #+#             */
/*   Updated: 2022/11/14 17:08:42 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* first step is to see if i have a substring if its true starts */
/* subtraio porque nao tenho espaco suficiente no big para procurar */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (!*little)
		return ((char *)big);
	if (!len)
		return (0);
	while (big[i] != '\0' && i < len)
	{
		n = 0;
		while ((big[i + n] != '\0' && big[i + n] == little[n]
				&& (i + n) < len && little[n] != '\0'))
		{
			if (little[n + 1] == '\0')
				return ((char *)&(big[i]));
			n++;
		}
		i++;
	}
	return (0);
}
