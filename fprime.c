/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 19:17:59 by ctacconi          #+#    #+#             */
/*   Updated: 2024/05/28 19:18:02 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	fprime(int num)
{
	unsigned int	prime;

	if (num == 1)
		printf("1");
	else
	{
		prime = 2;
		while (num > 1)
		{
			if (num % prime == 0)
			{
				printf("%d", prime);
				num /= prime;
				if (num > 1)
					printf("*");
				prime--;
			}
			prime++;
		}
	}
}

int	main (int argc, char **argv)
{
	if (argc == 2 && *argv[1])
		fprime(atoi(argv[1]));
	printf("\n");
	return (0);
}
