/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:12:15 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 09:33:17 by sonheres         ###   ########.fr       */
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
