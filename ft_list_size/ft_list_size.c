/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 10:25:58 by ctacconi          #+#    #+#             */
/*   Updated: 2024/04/05 12:40:08 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list_size.h"

int	ft_list_size(t_list *begin_list)
{
	int	i = 0;
	char *tmp;
	tmp = begin_list;

	while (tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
