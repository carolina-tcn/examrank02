/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:04:25 by carolinat         #+#    #+#             */
/*   Updated: 2024/03/13 19:15:16 by carolinat        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	len;

	if(n == 2)
	{
		len = ft_strlen(argv[1]) - 1;

		while(len >= 0)
		{
			write(1, &argv[1][len], 1);
			len--;	
		}
	}
	write(1, "\n", 1);
	return (0);
}
