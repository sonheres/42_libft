/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:59:44 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 09:32:52 by sonheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
/* count = cuantos elementos
size = los bytes que ocupa
i = contador para incicializar a 0 el array. 
NULL si no puede reservar porque no tiene sitio p.ej. 
count + size = nº elementos * bytes que ocupa */
void	*ft_calloc(size_t count, size_t size)
{
	void	*s;

	s = malloc(count * size);
	if (s == NULL)
		return (0);
	ft_bzero(s, count * size);
	return (s);
}
