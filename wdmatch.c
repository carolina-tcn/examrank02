/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:08:36 by carolinat         #+#    #+#             */
/*   Updated: 2024/03/20 13:16:33 by carolinat        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			while (*argv[2] != argv[1][i] && *argv[2] != '\0')
			{
				argv[2]++;
				if (*argv[2] == '\0')
					break ;
			}
			i++;
		}
		write(1, argv[1], i);
	}
	write(1, "\n", 1);
	return (0);
}
