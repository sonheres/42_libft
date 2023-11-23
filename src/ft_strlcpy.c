/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohernan <sohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:00:28 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 15:54:37 by sohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* ///REVISAR EDGE CASES ANTES DE LA ENTREGA!!!
Devuelve el tamaño de la cadena de origen.
Da igual el tamaño de las cadenas. 
Para comprobar el contenido printf (%s), cadena destino.
// contador cadena origen.
// valor para copiar.
// mientras el valor de la cadena de origen no sea el valor nulo...
//cuenta.
//Y si el tamaño de la cadena de destino es 0...
//No hay que copiar nada. Simplemente devolver la longitud)
//mientras el valor de origen no sea '\0' y no coincida con el nulo 
de la cadena de destino...
//copia el valor de la cadena de origen en la de destino.
//acaba con el valor nulo.
//devuelve el contador de la cadena de origen. */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	cont;

	len_src = 0;
	while (src[len_src] != '\0')
	{
		len_src++;
	}
	if (dstsize == 0)
	{
		return (len_src);
	}
	cont = 0;
	while (src[cont] != '\0' && cont < dstsize -1)
	{
		dst[cont] = src[cont];
		cont++;
	}
	dst[cont] = '\0';
	return (len_src);
}
/* int	main(void)
{
	char			str[] = "Ojete calores son amores";
	char			dest[50];
	unsigned int	size;
	size_t			i;

	size = 13;
	//i = strlcpy(dest, str, size);
	i = ft_strlcpy(dest, str, size);
	printf("srlcpy i = %lu\n", i);
	printf("srlcpy dest = %s\n", dest);
	return (0);
} */
