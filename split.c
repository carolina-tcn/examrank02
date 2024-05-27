/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:05:52 by ctacconi          #+#    #+#             */
/*   Updated: 2024/04/28 17:21:06 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	count_words(char *str)
{
	int	i;
	int count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

char	*pego(char *str, int start, int len)
{
	char *word;
	int i;

	i = 0;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = str[start + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	int		words;
	int		i;
	int		j;
	int		start;
	char	**matrix;

	i = 0;
	j = 0;
	start = 0;
	words = count_words(str);
	matrix = malloc(sizeof(char *) * (words + 1));
	if (!matrix)
		return (NULL);
	while (str[i])
	{
		if (i > 0 && str[i] != ' ' && str[i - 1] == ' ')
			start = i;
		if (i == 0 && str[i] != ' ')
			start = i;
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			matrix[j] = pego(str, start, i - start + 1);
			j++;
		}
		i++;
	}
	matrix[j] = NULL;
	return (matrix);
}

/*int main()
{
	char **result;
	int i;

	i = 0;

	result = ft_split("hola que tal como estas");
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
}*/
