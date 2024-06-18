/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 16:33:25 by carolinat         #+#    #+#             */
/*   Updated: 2024/06/18 16:33:30 by carolinat        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rep(char *str)
{
	int	i = 0;

	while (str[i])
	{
		char	c = str[i];
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			int	index;
			if (c >= 'a' && c <= 'z')
				index = c - 'a' + 1;
			else
				index = c - 'A' + 1;
			int	j = 0;
			while (j < index)
			{
				write(1, &c, 1);
				j++;
			}
		}
		else
			write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);

}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rep(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}
