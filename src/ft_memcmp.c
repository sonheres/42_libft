/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohernan <sohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:37:01 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 15:47:34 by sohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* //COMPARA (n) ÁREAS DE MEMORIA (bytes). 'Strnmp' compara caracteres (ascii).
int ft_memcmp(const void *s1, const void *s2, size_t n) 
//Me pueden pasar cualquier cosa. Por eso es 'void' y no 'char'
return ((int)(s1bis[i] - s2bis[i])); //cast a para que devuelva un 'int' 
porque s1bis y s2bis son unsigned char.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s1bis;
	const unsigned char	*s2bis;

	s1bis = s1;
	s2bis = s2;
	i = 0;
	while (i < n)
	{
		if (s1bis[i] != s2bis[i])
		{
			return ((int)(s1bis[i] - s2bis[i]));
		}
		else
		{
			i++;
		}
	}
	return (0);
}
/* int	main(void)
{
	char	s1[] = "lkakdsladf";
	char	s2[] = "400";

	int	result = memcmp(s1, s2, 4);
	int	myresult = ft_memcmp(s1, s2, 4);

	if (result == 0)
	{
		printf ("Las cadenas son iguales. \n");
	}
	else if (result > 0)
	{
		printf ("s1 es mayor que s2. \n");
	}
	else
	{
		printf ("s1 es menor que s2. \n");
	}
	if (myresult == 0)
	{
		printf ("Mis cadenas son iguales. \n");
	}
	else if (myresult > 0)
	{
		printf ("my s1 es mayor que s2. \n");
	}
	else
	{
		printf ("my s1 es menor que s2. \n");
	}
	return (0);
} */
