/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohernan <sohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:12:15 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 15:42:48 by sohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <ctype.h> */
/* La función isalpha() prueba cualquier carácter para el cual isupper(3) o 
islower(3) sea verdadero. El valor del argumento debe poder representarse como 
un carácter sin firmar o el valor de EOF. En el juego de caracteres ASCII, 
esto incluye los siguientes caracteres (precedidos por su número valores, 
en octal): */
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z' ))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/* int	main(void)
{
	int	caracter;

	caracter = 'r';
	printf("original: %i\n", isalpha(caracter));
	printf("propia: %i\n", ft_isalpha(caracter));
	return (0);
} */
