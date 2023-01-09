/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:38:50 by migmarti          #+#    #+#             */
/*   Updated: 2022/11/12 14:59:03 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*function type void i had to give a type
cast on str pointer so i can return something*/

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)str)[i] = c;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <string.h>
int main () {
   char str[50];

   strcpy(str,"This is string.h library function\n");
   printf(str);

   ft_memset(str,'$',7);
   printf(str);

   return(0);
}
*/
