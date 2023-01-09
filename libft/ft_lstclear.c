/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:59:58 by migmarti          #+#    #+#             */
/*   Updated: 2022/11/21 14:54:48 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* delete sequence of elements of list from a starting point
Deletes and frees the given element and every successor of that element,
using the function ’del’ and free(3). Finally, the pointer to the list must
be set to NULL. */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current != NULL)
	{
		next = current-> next;
		ft_lstdelone(current, del);
		current = next;
	}
	*lst = NULL;
}
