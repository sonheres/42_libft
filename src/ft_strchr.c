/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohernan <sohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:40:47 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 15:53:00 by sohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Devuelve la cadena desde la primera posición donde 
se encuentra la letra que metemos como parámetro.
//const char* quiere decir que es un string de solo lectura.
//declaro una variable para recorrer el string. 
// Estoy comparando una letra con el valor nulo. Solo puede ser == o !=;
nunca < y > porque el '\0' es cero.
//= es asignar; == es comparar
//devuelve el inicio del string + la posición de la variable. 
Y transformo el resultado en un string de tipo char **/
char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] == (unsigned char)c)
		{
			return ((char *)(s + i));
		}
		else
		{
			i++;
		}
	}
	return (NULL);
}
/* int	main(void)
{
	const char	str[] = "";
	int			c;

	c = 'e' + 1024;
	printf("Funcion original:     %s\n", strchr(str, c));
	printf("Funcion propio hecho: %s\n", ft_strchr(str, c));
	return (0);
} */
