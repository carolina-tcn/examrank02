/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 13:25:44 by carolinat         #+#    #+#             */
/*   Updated: 2024/03/23 13:36:54 by carolinat        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	if (n == 2)
	{
		while (argv[1][i] != '\0')
			i++;
		i--;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i--;
		while (argv[1][i] >= '!' && argv[1][i] <= '~')
			i--;
		i++;
		while (argv[1][i] >= '!' && argv[1][i] <= '~')
		{
			write(1, &argv[1][i], 1);
			i++;
		} 
	}
	write(1, "\n", 1);
	return (0);
}
