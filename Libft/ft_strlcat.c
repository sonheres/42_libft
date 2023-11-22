/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:46:59 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/21 12:59:24 by sonheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
/* Si la cadena a la que apunta input es controlada por el usuario 
y no existe ningún límite en el número de caracteres  al usar la función strcat 
acabaremos sobrepansando el tamaño de buf, y escribiendo en direcciones de 
memoria que no se debe. el parámetro dstsize especifica el número de bytes del 
búfer apuntado por s1. Así se copiará como máximo n bytes o bien si encuentra 
el carácter fin de cadena.
> while (src[res] != '\0')//coloca el contador res al final
> while (dst[i] != '\0')//calcula la longitud de dst
> i3 = i;//asigna valor de 'i' a i3 porque luego cambia valor 'i'
> if (dstsize > res + i)//si dstsize es mayor, para saber si cabe
> dstsize = res + i + 1;//añade fin de cadena
> while (src[i2] != '\0' && i < dstsize - 1 && dstsize > 0)//i = long(dst)
> if (dstsize + res > res + i3)//si tope + origen > origen + destino (si cabe)
> return (res + i3);//devolver origen + destino
> return (res + dstsize);//devuelve origen + cabe en el tope
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	i2;
	size_t	i3;
	size_t	res;

	i = 0;
	i2 = 0;
	res = 0;
	while (src[res] != '\0')
		res++;
	while (dst[i] != '\0')
		i++;
	i3 = i;
	if (dstsize > res + i)
		dstsize = res + i + 1;
	while (src[i2] != '\0' && i < dstsize - 1 && dstsize > 0)
		dst[i++] = src[i2++];
	dst[i] = '\0';
	if (dstsize + res > res + i3)
		return (res + i3);
	return (res + dstsize);
}
/*
//declaro un array propio en destino para que lo haga con mi función.
mycad_dst[20] = "PACO";
//declaro una variable para que recoja el resultado de la función propia.
mycad_total;
//dstsize =20 para que tenga longitud de sobra sumando las dos.
cad_total = strlcat(cad_dst, cad_src, 20);
//imprime la longitud todal (%lu)
printf("original : %lu\n", cad_total);
//imprime el contenido (%s)
printf("original cad_dest = %s\n", cad_dst);
*/
/* int	main(void)
{
	char	cad_src[] = "abcdefghi";
	char	cad_dst[50] = "pqrs";
	char	mycad_dst[50] = "pqrs";	
	char	cad_total;				
	char	mycad_total;			
	cad_total = strlcat(cad_dst, cad_src, 10);
	printf("original : %hhd\n", cad_total);
	printf("original cad_dest = %s\n", cad_dst);
	mycad_total = ft_strlcat(mycad_dst, cad_src, 10);
	printf("propia : %hhd\n", mycad_total);
	printf("propia mycad_dest = %s\n", mycad_dst);
 	return (0);
}  */
