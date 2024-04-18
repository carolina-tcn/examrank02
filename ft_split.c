/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 16:31:06 by ctacconi          #+#    #+#             */
/*   Updated: 2024/04/04 18:20:51 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//returns an array of strings

#include <stdlib.h>

char	*ft_strncpy(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

char **ft_split(char *str)
{
	int	i = 0;
	int j = 0;
	int	k = 0;
	char **word;

	word = (char **)malloc(sizeof(char *) * 1000);
	if (!word)
		return (NULL);
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] != '\0' && !(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (i > j)
		{
			word[k] = malloc(sizeof(char) * 1000);
			ft_strncpy(word[k], &str[j], i - j);
			k++;
		}
	}
	word[k] = NULL;
	return (out);
}
