/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 11:23:54 by carolinat         #+#    #+#             */
/*   Updated: 2024/03/23 11:44:01 by carolinat        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//calculates the length of the initial segment of s which consists entirely of bytes not in reject
size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i = 0;
	int	j = 0;

	while (reject[i])
	{
		while (s[j])
		{
			if (s[j] == reject[i])
				return (j);
			j++;
		}
		i++;
	}
	return (j);
	//returns the number of bytes in the initial segment of s which are not in the string reject
}
