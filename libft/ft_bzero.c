/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:51:10 by migmarti          #+#    #+#             */
/*   Updated: 2022/11/12 14:03:39 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*function erases the data in the n bytes of the memory
starting at the location pointed to by s, by writing zeros*/

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, 0, n);
}
