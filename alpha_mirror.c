/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:09:19 by carolinat         #+#    #+#             */
/*   Updated: 2024/03/21 18:34:08 by carolinat        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int	i = 0;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				argv[1][i] = 'm' - (argv[1][i] - 'n');
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				argv[1][i] = 'M' - (argv[1][i] - 'N');
			write(1, &argv[1][i], 1);
			i++;	
	}
	write(1, "\n", 1);
	return (0);
}
