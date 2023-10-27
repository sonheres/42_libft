/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohernan <sohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:00:28 by sonheres          #+#    #+#             */
/*   Updated: 2023/10/26 13:15:54 by sohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
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
//devuelve el contador de la cadena de origen. 
*/
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

/* 
//50. Asignar tamaño suficiente para contener la cadena de origen.
//creo un array para propio para probar con 20 caracteres de tamaño.
//creo una variable que guarda el número de caracteres del string.
//esta variable guarda los caracteres de mi función,
//asigno valor a la variable original. %lu para datos de tipo size_t.
//imprime los caracteres que se han copiado. %s porque es string.
// No da error a pesar de que quiero copiar más de 20 caracteres.
int	main(void)
{
	char	cad_src[] = "Cuentame un cuento por favor";
	char	cad_dst[50];
	char	mycad_dst[20];
	size_t	copy;
	size_t	mycopy;

	copy = strlcpy(cad_dst, cad_src, 50);
	printf("original copy = %lu\n", copy);
	printf("original cad_dest = %s\n", cad_dst);
	mycopy = ft_strlcpy(mycad_dst, cad_src, 60);
	printf("propia mycopy = %lu\n", mycopy);
	printf("propia mycad_dest = %s\n", mycad_dst);
	return (0);
}*/
