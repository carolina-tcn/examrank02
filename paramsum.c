/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 11:50:31 by carolinat         #+#    #+#             */
/*   Updated: 2024/03/24 12:07:18 by carolinat        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_nb(int n)
{
	if (n > 10)
		put_nb(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc < 2)
	{
		write(1, "0\n", 2);
		return (0);
	}
	else
		putnbr(argc - 1);
	write(1, "\n", 1);
	return (0);
}
