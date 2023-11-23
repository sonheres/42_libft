/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohernan <sohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:47:10 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 15:59:15 by sohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <ctype.h> */
/* Convierte la letra en mayúsculas. Devuelve la propia letra convertida.
 if (c >= 'a' && c <= 'z')// a = 97 && z = 122 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	else
	{
		return (c);
	}
}

/* int	main(void)
{
	int		c;

	c = 'p';
	printf("Funcion original:     %c\n", toupper(c));
	printf("Funcion propio vasco: %c\n", ft_toupper(c));
	return (0);
} */
