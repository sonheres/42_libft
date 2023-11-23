/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohernan <sohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:35:07 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 15:42:56 by sohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <ctype.h>*/
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
/* int	main(void)
{
	int	charnum;

	charnum = 'K';
	printf("original: %i\n", isalnum(charnum));
	printf("propia: %i\n", ft_isalnum(charnum));
	return (0);
} */
