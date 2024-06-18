/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 18:00:36 by carolinat         #+#    #+#             */
/*   Updated: 2024/06/18 18:00:41 by carolinat        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int	i = 0;
		int	j = 0;
		while (argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
				i++;
			if (argv[1][i] == '\0')
			{
				write(1, "1\n", 2);
				return (0);
			}
			j++;
		}
		write(1, "0\n", 2);
		return (0);
	}
	write(1, "\n", 1);
	return (0);
}
