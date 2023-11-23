/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:43:23 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 09:32:55 by sonheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
/* La función bzero() escribe n bytes puestos a cero en la cadena s. Si n es 
cero, bzero() no hace nada. 
 */
void	ft_bzero(void *s, size_t n)

{
	char	*r;
	size_t	i;

	r = s;
	i = 0;
	while (i < n)
	{
		r[i] = 0;
		i++;
	}
}
