/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:55:02 by frubio-i          #+#    #+#             */
/*   Updated: 2024/12/21 21:08:23 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*curr;

	if (!lst || !f || !del)
		return (NULL);
	start = ft_lstnew(f(lst->content));
	curr = start;
	while (lst && lst->next)
	{
		if (!curr)
			return (NULL);
		curr->next = ft_lstnew(f(lst->next->content));
		curr = curr->next;
		lst = lst->next;
	}
	return (start);
}
