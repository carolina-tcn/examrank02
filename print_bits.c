/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:58:38 by carolinat         #+#    #+#             */
/*   Updated: 2024/03/20 13:13:33 by carolinat        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i = 7;
	char	bits;

	while (i >= 0)
	{
		bits = ((octet >> i) & 1) + '0';
		write(1, &bits, 1);
		i--;
	}
}
