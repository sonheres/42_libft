/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohernan <sohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:43:23 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 15:39:37 by sohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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

/* int	main(void)
{
	char	cadena[] = "Cambio a cero";
	char	cadena_ft[] = "Cambio a cero";
	bzero(cadena, (2));
	printf ("original:%s\n",cadena);
	printf ("long_original: %lu\n",strlen(cadena));

	ft_bzero(cadena_ft, (2));
	printf ("propia :%s\n",cadena_ft);
	printf ("long_propia: %lu\n",strlen(cadena_ft));
	return(0);
} 
 */