/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:02:27 by carolinat         #+#    #+#             */
/*   Updated: 2024/04/29 18:02:31 by carolinat        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*first;
	int flag = 0;
	first = lst;
	int	tmp;

	while (first && first->next)
	{
		if (!cmp(first->data, first->next->data))
		{
			flag = 1;
			tmp = first->next->data;
			first->next->data = first->data;
			first->data = tmp;
			first = lst;
		}
		if (flag = 0)
			first = first->next;
	}
	return (lst);
}
