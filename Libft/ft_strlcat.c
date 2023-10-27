/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohernan <sohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:46:59 by sonheres          #+#    #+#             */
/*   Updated: 2023/10/26 13:47:41 by sohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
/* copia una cadena de origen en el final de una cadena de destino. 
Devuelve la longitud de la suma de las dos cadenas.
//declaro una variable que recorre el array de origen y devuelve su longitud
//declaro una variable que recorre el array de destino y devuelve su longitud
//declaro una variable para copiar el array de destino.
//declaro una variable para copiar el array de origen.
//inicializo para recorrer la cadena de destino. [PACO]
//mientras que no encuentre el fin de cadena...
//adelante.
//inicializo para recorrer la cadena de origen. [PIL]
//mientras que no encuentre el fin de cadena...
//se posiciona al principio del array de origen.
//se posiciona al final del array de origen. 
si dejo len_dst -1 no imprime la última letra [PACPIL]
//mientras origen de i no sea el valor nulo y j sea menor o igual que dstsize...
//asiga a j en destino el valor de i en el array de origen.*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	i;
	size_t	j;

	len_dst = 0;
	while (dst[len_dst] != '\0')
	{
		len_dst++;
	}
	len_src = 0;
	while (src[len_src] != '\0')
	{
		len_src++;
	}
	i = 0;
	j = len_dst;
	while (src[i] != '\0' && j <= dstsize)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	return (len_src + len_dst);
}

/*int	main(void)
{
	char	cad_src[] = "PIL";
	char	cad_dst[20] = "PACO";
	char	mycad_dst[20] = "PACO";
	char	cad_total;						
	char	mycad_total;					
	
	cad_total = strlcat(cad_dst, cad_src, 20);
	printf("original : %lu\n", cad_total);
	printf("original cad_dest = %s\n", cad_dst);
	mycad_total = ft_strlcat(mycad_dst, cad_src, 20);
	printf("propia : %lu\n", mycad_total);
	printf("propia mycad_dest = %s\n", mycad_dst);
	return (0);
}

int	main(void)
{
	char	cad_src[] = "PIL";
	char	cad_dst[20] = "PACO";
	char	mycad_dst[20] = "PACO";	// declaro un array propio en destino 
									para que lo haga con mi función.
	char	cad_total;				// declaro una variable para que recoja 
									el resultado de la función original.
	char	mycad_total;			// declaro una variable para que recoja 
									el resultado de la función propia.
	
	cad_total = strlcat(cad_dst, cad_src, 20);		//dstsize =20 para que tenga 
													longitud de sobra sumando las dos.
	printf("original : %lu\n", cad_total);			//imprime la longitud todal (%lu)
	printf("original cad_dest = %s\n", cad_dst);	//imprime el contenido (%s)
	mycad_total = ft_strlcat(mycad_dst, cad_src, 20);
	printf("propia : %lu\n", mycad_total);
	printf("propia mycad_dest = %s\n", mycad_dst);
	return (0);
}*/