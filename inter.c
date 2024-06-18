/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 17:13:37 by carolinat         #+#    #+#             */
/*   Updated: 2024/06/18 20:06:45 by carolinat        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int	arr[255] = {0};
		int	i = 0;

		while (argv[2][i] != '\0')
		{
			arr[(int)argv[2][i]] = 1;
			i++;
		}
		i = 0;
		while (argv[1][i] != '\0')
		{
		/*ya está evaluando si el valor en arr[(int)str[1][i]] es distinto de cero. En C, cualquier valor distinto de cero se considera como verdadero en un contexto booleano, mientras que cero se considera falso. Por lo tanto, si arr[(int)str[1][i]] es igual a 1, la condición se evaluará como verdadera, y si es igual a 0, se evaluará como falsa.*/
			if (arr[(int)argv[1][i]])
			{
				write(1, &argv[1][i], 1);
				arr[(int)argv[1][i]] = 0;
			}
			i++;
		}
		/*este bucle inicializa el array arr marcando como 1 los índices correspondientes a los caracteres presentes en la segunda cadena str[2]. Esto prepara arr para ser utilizado posteriormente para determinar qué caracteres de la primera cadena deben imprimirse*/
	}
	write(1, "\n", 1);
	return (0);
}
