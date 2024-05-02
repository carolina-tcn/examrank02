/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 12:32:49 by carolinat         #+#    #+#             */
/*   Updated: 2024/03/24 12:42:34 by carolinat        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	if (argc <= 1)
		write(1, "\n", 1);
	int	i = 1;
	int	j = 0;
	while (i < argc)
	{
		while (argv[i][j])
		{
			if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
				argv[i][j] += 32;
			j++;
		}
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][0] >= 'a' && argv[i][0] <= 'z')
				argv[i][0] -= 32;
			if (argv[i][j] == ' ' || argv[i][j] == '\t')
			{
				if (argv[i][j + 1] >= 'a' && argv[i][j + 1] <= 'z')
					argv[i][j + 1] -= 32;
			}
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
