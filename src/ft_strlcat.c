/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:46:59 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 09:27:09 by sonheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
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
