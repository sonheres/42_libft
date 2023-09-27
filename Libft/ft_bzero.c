/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:43:23 by sonheres          #+#    #+#             */
/*   Updated: 2023/09/27 11:24:22 by sonheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)

{
	char	*r;
	size_t	i;

	r = s;
	i = 0;
	while (i < n)
	{
		r[i];
		i++;
	}
	return (s);
}

int	main(void)
{
	char	cadena[] = "Cambio a cero";
	char cadena_ft[] = "Cambio a cero";
	
	memset(cadena,5);
	printf ("original :%s\n", cadena);

	ft_memset(cadena_ft, 5);
	printf ("propia :%s\n",cadena_ft);
	return(0);
}
