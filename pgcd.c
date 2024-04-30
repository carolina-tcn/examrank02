/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 18:04:25 by carolinat         #+#    #+#             */
/*   Updated: 2024/04/30 18:04:39 by carolinat        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int a;
	int b;
	int res;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		if (a > b)
			res = a;
		else
			res = b;
		while (1)
		{
			if ((a % res == 0) && (b % res == 0))
			{
				printf("%d", res);
				break ;
			}
			res--;
		}
	}
	printf("\n");
	return (0);
}
