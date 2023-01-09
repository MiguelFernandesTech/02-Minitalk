/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:25:33 by migmarti          #+#    #+#             */
/*   Updated: 2022/11/22 09:31:28 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* apply function to content of all list's elements into new list */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*new;
	int		size;

	(void)del;
	size = ft_lstsize(lst);
	if (size == 0)
		return (0);
	temp = ft_lstnew(f(lst->content));
	if (!temp)
		return (0);
	lst = lst->next;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&temp, del);
			return (0);
		}
		ft_lstadd_back(&temp, new);
		lst = lst->next;
	}
	return (temp);
}
