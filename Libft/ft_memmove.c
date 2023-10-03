/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:40:08 by sonheres          #+#    #+#             */
/*   Updated: 2023/10/03 10:41:50 by sonheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*fw;
	char		*temp;
	const char	*frm;
	size_t		i;

	fw = dst;
	frm = src;
	i = 0;
	temp = (char *)malloc(strlen(frm) + 1);
	while (i < len)
	{
		temp[i] = frm[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		fw[i] = temp[i];
		i++;
	}
	free(temp);
	return (dst);
}

/*int	main(void)
{
	char const	cad_src[] = "cadena de";
	char		*buffer;
	char		*buffer_prop;

	buffer = (char *)malloc(strlen(cad_src) + 2);
	memcpy(buffer, cad_src, strlen(cad_src) + 1);
	printf ("antes :%s\n", buffer);
	memmove(buffer, buffer + 1, strlen(buffer) + 1);
	printf ("después :%s\n", buffer);
	free(buffer);
	buffer_prop = (char *)malloc(strlen(cad_src) + 2);
	memcpy(buffer_prop, cad_src, strlen(cad_src) + 1);
	printf ("antes buffer propio :%s\n", buffer_prop);
	ft_memmove(buffer_prop, buffer_prop + 1, strlen(buffer_prop) + 1);
	printf ("después buffer propio :%s\n", buffer_prop);
	free(buffer_prop);
	return (0);
}
*/