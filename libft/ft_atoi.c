/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:14:43 by migmarti          #+#    #+#             */
/*   Updated: 2022/11/22 10:51:30 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* convert ASCII string to integer */
/* converts the initial portion of the string pointedto by str
to int representation. */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	res;
	int	sign;
	int	i;

	res = 0;
	sign = 1;
	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == 43 || nptr[i] == 45)
	{
		if (nptr[i] == 45)
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = (res * 10) + (nptr[i] - '0');
		i++;
	}
	return (res * sign);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "13456";
	int val = ft_atoi(str1);
	printf ("%d", val);
	return 0;
}
*/
