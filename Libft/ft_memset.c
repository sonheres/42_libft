/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:19:46 by sonheres          #+#    #+#             */
/*   Updated: 2023/09/26 18:27:57 by sonheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*n;
	int	i;

	n = b;
	i = 0;
	while (i < len)
	{
		n[i] = c;
		i++;
	}
	return(b);
}

int	main(void)
{
	char cadena[] = "Cambio a cero";
	char cadena_ft[] = "Cambio a cero";
	
	memset(cadena, '0', 30);
	printf ("original :%s\n", cadena);

	ft_memset(cadena_ft,'0', 30);
	printf ("propia :%s\n",cadena_ft);
	return(0);
}
