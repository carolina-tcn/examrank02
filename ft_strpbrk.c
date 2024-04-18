/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 12:38:55 by carolinat         #+#    #+#             */
/*   Updated: 2024/03/23 12:53:23 by carolinat        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//function locates the first occurrence in the string s of any of the bytes in the string accept
char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i = 0;
	
	while (*s1)
	{
		while (s2[i])
		{
			if (*s1 == s2[i])
				return ((char *)s1);
			i++;
		}
		s1++;
	}
}
