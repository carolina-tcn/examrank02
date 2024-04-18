/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 10:13:13 by carolinat         #+#    #+#             */
/*   Updated: 2024/03/24 10:24:09 by carolinat        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i = 1;
	int	j = 0;
	int	arr[255] = {0};
	
	if (argc == 3)
	{
		while (i <= 2)
		{
			while (str[i][j])
			{
				if (!arr[(int)str[i][j])
				{
					write(1, &str[i][j], 1);
					arr([int]str[i][j]) = 1;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
