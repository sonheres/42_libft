/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:47:56 by sonheres          #+#    #+#             */
/*   Updated: 2023/10/19 15:04:58 by sonheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

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
		{
			return ((char *)(haystack + i));
		}
		else
		{
			i++;
		}
	}
	return (NULL);
}


/*
int	main(void)
{
	const char	*cadena = "gilipollas";
	char		*need = "ipo";

	char *result = strnstr(cadena, need, 7);//mejor declarar la variable (en este caso una puntero a char) y asignar valor por separado.
	if(result != NULL)//cuando el valor no se encuentra en la cadena.
	{
		printf("La cadena queda así: %s\n", result);
	}
	else
	{
		printf(" La subcadena no se encuentra en la cadena.\n");
	}
	char *myresult = ft_strnstr(cadena, need, 7);

	if (myresult != NULL)
	{
		printf("My cadena queda así: %s \n", myresult);
	}
	else
	{
		printf("My subcadena no se encuentra en la cadena.\n");
	}
}

/*
//BUSCA UNA SUBCADENA(serie de caracteres)dentro de un string a lo largo de 'n' bytes.
char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t  j;

	i = 0;
	while (haystack[i] != '\0' && i < len)// mientras no llegue al final de la cadena...
	{
		j = 0;
		while (haystack[i + j] == needle[j] && haystack[i + j] != '\0' && needle[j] != '\0')// [i+j]contador de 'h'+ contador de 'n' para que avance a la par de needle. Siempre que no llegue al final ninguna de las dos cadenas.
		{
			j++;
		}
		if (needle[j] == '\0' && (i + j) <= len) // (Acotar los bytes a comparar)
		{
			return ((char *)(haystack + i)); //devuelve el puntero.
		}
		else
		{
			i++;
		}
	}
	return (NULL); // Si tengo que devolver un puntero devuelve NULL en caso de no encontrarlo en lugar de '0'.
}
*/