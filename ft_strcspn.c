/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 11:23:54 by carolinat         #+#    #+#             */
/*   Updated: 2024/04/28 13:56:18 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//calculates the length of the initial segment of s which consists entirely of bytes not in reject
//Scans str1 for the first occurrence of any of the characters that are part of str2, returning the number of characters of str1 read before this first occurrence.

//The search includes the terminating null-characters. Therefore, the function will return the length of str1 if none of the characters of str2 are found in str1.
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
