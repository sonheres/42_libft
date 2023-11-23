/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:44:34 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 09:26:00 by sonheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
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
