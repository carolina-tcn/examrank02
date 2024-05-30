/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:44:54 by carolinat         #+#    #+#             */
/*   Updated: 2024/04/29 17:45:04 by carolinat        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

//OJO!!! hace overflow y time-out
int	*ft_rrange(int start, int end)
{
	int	*array;
	int	i;
	int	len;

	if (start > end)
	{
		len = start - end + 1;
		array = malloc(sizeof(int) * len);
		while (i < len)
		{
			array[i] = start;
			start--;
			i++;
		}
	}
	else
	{
		len = end - start + 1;
		array = malloc(sizeof(int) * len);
		while (i < len)
		{
			array[i] = end;
			end--;
			i++;
		}
	}
	return (array);
}
