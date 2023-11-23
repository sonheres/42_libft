/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohernan <sohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:40:08 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 15:59:33 by sohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* La función memmove() copia len bytes de la cadena src a la cadena dst. 
Los dos cadenas pueden superponerse; la copia siempre se realiza de forma no 
destructiva. Los dos punteros apuntan a la misma región de memoria.
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int			i;

	if (!dst && !src)
		return (0);
	if (dst < src)
	{
		i = 0;
		while (i < (int)len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	else
	{
		i = len - 1;
		while (i >= 0)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i--;
		}
	}
	return (dst);
}
/* int	main(void)
{
	char	str[] = "Mamma mia";
	char	*src;

	//str = "H";
	src = (char *) malloc (sizeof(char) * (ft_strlen(str) + 1));
	memcpy(src, str, 47);
	//OJO LA SIGUIENTE LINEA ESTAn PARTIDAS
	printf("src despues de ft_memmove:\n%s\n", 
	ft_memmove((void *)src + -10, src, 3));
	//printf("src despues de memmove:\n%s\n", 
	memmove((void *)src - 10, src, 3);
	return (0);
} */
