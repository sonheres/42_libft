/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohernan <sohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:47:56 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 15:57:00 by sohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* //BUSCA UNA SUBCADENA(serie de caracteres)dentro de un string
 a lo largo de 'n' bytes.
 > if (needle[0] == '\0')//si el primer caracter de needle es fin de cadena...
  return ((char *)haystack); devuelve la cadena original.
  Cast porque es parámetro 'const char'
// mientras no llegue al final de la cadena...
// [i+j]contador de 'h'+ contador de 'n' para que avance a la par de needle. 
Siempre que no llegue al final ninguna de las dos cadenas. 
// (Acotar los bytes a comparar)
//devuelve el puntero.
// Si tengo que devolver un puntero devuelve NULL >return (0);//= NULL
en caso de no encontrarlo en lugar de '0'*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (0);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && haystack[i + j] != '\0' \
		&& needle[j] != '\0')
		{
			j++;
		}
		if (needle[j] == '\0' && (i + j) <= len)
			return ((char *)(haystack + i));
		else
			i++;
	}
	return (0);
}
/* int	main(void)
{
	const char	haystack[] = "Eeeeeese cccccaballo de la Pradera";
	const char	neddle[] = "ca";
	size_t		len;

	len = 15;
	printf("Funcion original: %s\n", strnstr(haystack, neddle, len));
	printf("Funcion mio:      %s\n", ft_strnstr(haystack, neddle, len));
	return (0);
} */
