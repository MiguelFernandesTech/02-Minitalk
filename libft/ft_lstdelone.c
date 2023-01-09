/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:38:52 by migmarti          #+#    #+#             */
/*   Updated: 2022/11/22 11:04:26 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* delete element from list
Takes as a parameter an element and frees the memory of the element’s
content using the function ’del’ given as a parameter and free the element.
The memory of ’next’ must not be freed.*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free (lst);
}
