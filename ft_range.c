/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:22:32 by ctacconi          #+#    #+#             */
/*   Updated: 2024/04/19 16:22:36 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
	int *res;
	int len;
	int i = 0;

	if (start > end)
	{
		len = start - end;
		res = malloc(sizeof(int) * (len + 1));
		while (start >= end)
		{
			res[i] = start;
			start--;
			i++;
		}
	}	
	else
	{
		len = end - start;
		res = malloc(sizeof(int) * (len + 1));
		while (start <= end)
		{
			res[i] = start;
			start++;
			i++;
		}
	}
	return (res);
}

/*int main(void)
{
	int end = -3;
	int start = 0;
	int size = start - end;
	int *res = ft_range(start, end);
	int i = 0;
	while (i <= size)
	{
		printf ("%d\n", res[i]);
		i++;
	}
	free(res);
	return (0);
}*/