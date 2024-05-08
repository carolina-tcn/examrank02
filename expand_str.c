/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 11:18:59 by carolinat         #+#    #+#             */
/*   Updated: 2024/03/24 11:49:05 by carolinat        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i = 0;
	if (argc == 2)
	{
		while (*argv[1] == ' ' || *argv[1] == '\t')
			argv[1]++;
		while (argv[1][i])
		{
			if (argv[1][i] != ' ')
			{
				if (argv[1][i - 1] == ' ' && i)
					write(1, "   ", 3);
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
