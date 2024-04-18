/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:45:58 by carolinat         #+#    #+#             */
/*   Updated: 2024/03/20 19:21:08 by carolinat        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_reverse(char *str)
{
	int	len = 0;
	int	j;
	int	first_word = 1;
	
	while (str[len])
		len++;
	while (len >= 0)
	{
		while (len >= 0 && (str[len] == '\0' || str[len] == ' ' || str[len] == '\t'))
			len--;
		j = len;
		while (j >= 0 && str[j] != ' ' && s[j] != '\t')
		j--;
		if (first_word == 0)
			write(1, " ", 1);
		write(1, s + j + 1, len - 1);
		first_word = 0;
		len = j;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_reverse(argv[1]);
	write (1, "\n", 1);
	return (0);
}
