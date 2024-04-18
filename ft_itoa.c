/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:30:02 by ctacconi          #+#    #+#             */
/*   Updated: 2024/04/15 20:08:45 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len_num(int num)
{
	int	i = 0;
	while (num)
	{
		num/=10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	char	*res;
	int len = len_num(nbr);
	if (nbr == 0)
	{
		res = malloc(2 * sizeof(char));
		res[0] = '0';
		res[1] = '\0';
		return (res);
	}
	if (nbr < 0)
		len++;
	res = malloc(sizeof(char) * (len + 1));
	if (nbr < 0)
	{
		res[0] = '-';
		nbr *= -1;
	}
	res[len] = '\0';
	len--;
	while (nbr)
	{
		res[len] = (nbr % 10) + '0';
		nbr/=10;
		len--;
	}
	return (res);
}
