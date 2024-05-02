/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 11:03:59 by carolinat         #+#    #+#             */
/*   Updated: 2024/03/23 11:21:48 by carolinat        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int uno = atoi(str[1]);
		int dos = atoi(str[3]);

		if (str[2][0] == '+')
			printf("%i", uno + dos);
		else if (str[2][0] == '-')
			printf("%i", uno - dos);
		else if (str[2][0] == '*')
			printf("%i", uno * dos);
		else if (str[2][0] == '/')
			printf("%i", uno / dos);
		else if (str[2][0] == "%")
			printf("%i", uno % dos);
	}   
	printf("\n");
}
