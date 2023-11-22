/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:47:56 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/21 17:27:30 by sonheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
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
	const char	*cadena = "gilipollas";
	char		*need = "";

	char *result = strnstr(cadena, need, 0);
	//mejor declarar la variable (en este caso una puntero a char) 
	//y asignar valor por separado.
	if(result != NULL)//cuando el valor no se encuentra en la cadena.
	{
		printf("La cadena queda así: %s\n", result);
	}
	else
	{
		printf(" La subcadena no se encuentra en la cadena.\n");
	}
	char *myresult = ft_strnstr(cadena, need, 0);

	if (myresult != NULL)
	{
		printf("My cadena queda así: %s \n", myresult);
	}
	else
	{
		printf("My subcadena no se encuentra en la cadena.\n");
	}
} */