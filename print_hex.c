/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:34:26 by ctacconi          #+#    #+#             */
/*   Updated: 2024/04/10 21:37:15 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_digit(char *num)
{
	int i = 0;
	int	res = 0;
	while (num[i])
	{
		res *= 10;
		res += num[i] - '0';
		i++;
	}
	return (res);
}

void	ft_print_hexa(int num)
{
	if (num > 16)
		ft_print_hexa(num / 16);
	num = num % 16;
	write(1, &"0123456789abcdef"[num % 16], 1);
}

int	main(int argc, char **argv)
{
	int	num;
	if (argc == 2)
	{
		num = ft_digit(argv[1]);
		ft_print_hexa(num);
	}
	write(1, "\n", 1);
	return (0);
}
