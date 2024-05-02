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

char	*ft_strncpy(char *dst, char *src, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		dst[i] = src[j];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
char	**ft_split(char *str)
{
	int	i = 0;
	int	j = 0;
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
		while (str[i] != '\0' && !(str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ))
			i++;
		if (i > j)
		{
			word[k] = malloc(sizeof(char) * 1000);
			ft_strncpy(word[k], &str[j], i - j);
			k++;
		}
	}
	word[k] = NULL;
	return (word);
}

/*int	main(void)
{
	int i = 0;
	char *str = "carol hola que tal";
	char **split = ft_split(str);

	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	free(split);
	return (0);
}*/
