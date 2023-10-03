/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:19:46 by sonheres          #+#    #+#             */
/*   Updated: 2023/09/28 11:14:04 by sonheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*n;
	size_t	i;

	n = b;
	i = 0;
	while (i < len)
	{
		n[i] = c;
		i++;
	}
	return (b);
}

int	main(void)
{
	char	cadena[] = "Cambio a cero";
	char cadena_ft[] = "Cambio a cero";
	
	memset(cadena, 'p', 5);
	printf ("original :%s\n", cadena);

	ft_memset(cadena_ft,'p', 5);
	printf ("propia :%s\n",cadena_ft);
	return(0);
}
