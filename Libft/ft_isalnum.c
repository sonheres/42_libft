/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:35:07 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 08:52:08 by sonheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función isalnum() prueba cualquier carácter para el cual isalpha(3)
 o isdigit(3) sea verdadero. El valor del argumento debe poder representarse 
 como un carácter sin firmar o el valor de EOF. En el juego de caracteres 
 ASCII, esto incluye los siguientes caracteres (precedidos por su número
valores, en octal */
int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z' ) \
	|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
