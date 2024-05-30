/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 13:02:28 by carolinat         #+#    #+#             */
/*   Updated: 2024/05/11 13:49:51 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*new_list;

	if (!lst || !f)
		return (NULL);
	first = NULL;
	while (lst)
	{
		if (!(new_list = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		ft_lstadd_back(&first, new_list);
		lst = lst->next;
	}
	return (first);	
}
