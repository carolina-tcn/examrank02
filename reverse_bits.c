/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:12:21 by carolinat         #+#    #+#             */
/*   Updated: 2024/03/20 13:14:19 by carolinat        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	out;

	out = 0;
	out += ((octet & 128) >> 7);
	out += ((octet & 64) >> 5);
	out += ((octet & 32) >> 3);
	out += ((octet & 16) >> 1);
	out += ((octet & 8) << 1);
	out += ((octet & 4) << 3);
	out += ((octet & 2) << 5);
	out += ((octet & 1) << 7);
	return (out);
}
