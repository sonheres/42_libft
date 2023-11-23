/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohernan <sohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:43:52 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 15:57:40 by sohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Devuelve la cadena desde la ÚLTIMA posición donde se encuentra la letra 
que metemos como parámetro.
//declaro una variable para ir guardando la posición de las coincidencias.
//inicializo desde NULL la variable. Según recorra el string irá machacando 
los resultados.
// Mientras i(string) no sea el fin de cadena...
// Si i(string) coincida con el parámetro que he metido...
// Mete en la variable "result" la posición (inicio string + recorrido de i) 
y cámbialo de solo lectura a char*. */
char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*result;
	char	c2;

	c2 = c % 256;
	result = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c2)
		{
			result = (char *)(s + i);
		}
		i++;
	}
	if (c2 == '\0')
		return ((char *)(s + i));
	else
		return (result);
}
/* int	main(void)
{
	const char	str[] = "Se cago en Missuri";
	int			c;

	c = '\0';// + 256;
	//c = 333;
	printf ("%i\n", c);
	printf("Funcion original =     %s\n", strrchr(str, c));
	printf("Funcion hecho propio = %s\n%p", ft_strrchr(str, c), 
	ft_strrchr(str, c));
	return (0);
} */
