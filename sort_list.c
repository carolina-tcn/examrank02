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
	t_list	*tmp;
	int flag = 1;
	tmp = lst;
	int	num;

	while (flag)
	{
		flag = 0;
		while (tmp && tmp->next)
		{
			if (!cmp(tmp->data, tmp->next->data))
			{
				flag = 1;
				num = tmp->data;
				tmp->data = tmp->next->data;
				tmp->next->data = num;
			}
		tmp = tmp->next;
		}
	tmp = lst;
	}
return (tmp);
}
