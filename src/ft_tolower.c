/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohernan <sohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:20:55 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 15:58:52 by sohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <ctype.h> */
/* Convierte la letra en minúsculas. Devuelve la propia letra convertida. */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	else
	{
		return (c);
	}
}

/* int	main(void)
{
	int		c;

	c = 'W';
	printf("Funcion original:     %c\n", tolower(c));
	printf("Funcion propio vasco: %c\n", ft_tolower(c));
	return (0);
} */
