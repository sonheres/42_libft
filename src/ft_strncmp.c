/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohernan <sohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:55:21 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 15:56:19 by sohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* COMPARA LOS CARACTERES DE DOS CADENAS. Siempre van a pasar strings.
// n es un valor constante. Es el tope.
//s1[i] sería una letra concreta, mientras que 'i' es un contador. 
Empieza a contar desde '0'*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		result;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
		{
			result = (unsigned char)s1[i] - (unsigned char)s2[i];
			return (result);
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
	char	s1[] = "456";
	char	s2[] = "586";

	int	result = strncmp(s1, s2, 1);
	int	myresult = ft_strncmp(s1, s2, 1);
	
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
