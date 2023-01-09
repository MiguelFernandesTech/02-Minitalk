/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:22:28 by migmarti          #+#    #+#             */
/*   Updated: 2022/11/12 12:27:58 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
/*
#include <stdio.h>
#include <ctype.h>

int main () {
   int i = 0;
   char str[] = "Tutorials Point";

   while(str[i]) {
      putchar (ft_toupper(str[i]));
      i++;
   }

   return(0);
}
*/
