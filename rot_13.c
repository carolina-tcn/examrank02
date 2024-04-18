/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 16:18:44 by ctacconi          #+#    #+#             */
/*   Updated: 2024/03/15 18:07:10 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	if (argc ==2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if ((argv[1][i] >= 'N' && argv[1][i] <= 'Z') || (argv[1][i] >= 'n'&& argv[1][i] <= 'z'))
				argv[1][i] += 13;
			else if	((argv[1][i] >= 'A' && argv[1][i] <= 'M') || (argv[1][i] >= 'a'&& argv[1][i] <= 'm'))
				argv[1][i] -= 13;
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
