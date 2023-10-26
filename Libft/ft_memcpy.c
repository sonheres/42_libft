/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohernan <sohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:44:34 by sonheres          #+#    #+#             */
/*   Updated: 2023/10/26 12:27:20 by sohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*r;
	const char	*d;
	size_t		i;

	r = dst;
	d = src;
	i = 0;
	while (i < n)
	{
		r[i] = d[i];
		i++;
	}
	return (dst);
}

/*int	main(void)
{
	char const	cad_src[] = "";
	char *cad_dst;
	char *cad_dst_propio;

	cad_dst = (char *)malloc(strlen(cad_src) + 1);
	cad_dst_propio = (char *)malloc(strlen(cad_src) + 1);
	
	memcpy(cad_dst, cad_src, strlen(cad_src) + 1 );
	printf ("resultado con original :%s\n", cad_dst);
	free(cad_dst);
	ft_memcpy(cad_dst_propio, cad_src, strlen(cad_src) + 1 );
	printf ("resultado con propia :%s\n", cad_dst_propio);
	free(cad_dst_propio);
	return(0);
}
*/