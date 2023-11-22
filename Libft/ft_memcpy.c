/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:44:34 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/22 07:05:31 by sonheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/* La función memcpy() copia 'n' bytes del área de memoria src al área de 
memoria dst. Si 'dst' y 'src' se superponen, el comportamiento no está definido. 
Aplicaciones en las que dst y src podría superponerse debería usar memmove.
*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*r;
	const char	*d;
	size_t		i;

	r = dst;
	d = src;
	if (!r && !d)
		return (NULL);
	i = 0;
	while (i < n)
	{
		r[i] = d[i];
		i++;
	}
	return (dst);
}

/* int	main(void)
{
	char const	cad_src[] = "dime con quién andas....";
	char *cad_dst;
	char *cad_dst_propio;

	cad_dst = (char *)malloc(strlen(cad_src) + 1);
	cad_dst_propio = (char *)malloc(strlen(cad_src) + 1);
	memcpy(cad_dst, cad_src, 3 );
	printf ("resultado con original :%s\n", cad_dst);
	free(cad_dst);
	ft_memcpy(cad_dst_propio, cad_src, 3 );
	printf ("resultado con propia :%s\n", cad_dst_propio);
	free(cad_dst_propio);
	return(0);
} */
