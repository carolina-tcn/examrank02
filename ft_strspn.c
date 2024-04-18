/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 11:48:12 by carolinat         #+#    #+#             */
/*   Updated: 2024/03/23 12:20:42 by carolinat        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strspn(const char *s, const char *accept)
{
	const char *t_s = s;
	const char *t_accept = accept;

	while (*t_s)
	{
		while (1)
		{
			if (*t_s == *t_accept)
				break ;
			else if (*t_accept++ == '\0')
				return (t_s - s);
		}
		t_s++;
	}
	return (t_s - s);
}
