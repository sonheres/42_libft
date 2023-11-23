/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohernan <sohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:17:02 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 15:45:53 by sohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* La función memchr() localiza la primera aparición de c 
(convertida a un archivo sin signo char) en la cadena s.
DEVUELVE UN PUNTERO DE 'c' EN UN STRING.
return ((void *)(str + i)); // He hecho un cast(void *) para que interprete 
void * en lugar de char *. str es el puntero inicial + el contador (i). 
return (NULL); // tiene que devolver 'NULL' si no encuentra 'c'.
MAIN > char *result = memchr(cadena, 'a', 8);//tiene que devolver un puntero (*)
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		i;

	str = s;
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)str)[i] == (unsigned char)c)
			return ((void *) &((unsigned char *)str)[i]);
		i++;
	}
	return (0);
}
/* int	main(void)
{
	char cadena[] = "parafarmacia";
	char cadena_ft[] = "parafarmacia";

	char *result = memchr(cadena, 'a', 8); // tiene que devolver un puntero (*)
	char *myresult = ft_memchr(cadena_ft, 'a', 8);

	printf("original :%s\n", result);
	printf("propia :%s\n", myresult);
	return (0);
} */
