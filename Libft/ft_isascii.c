/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohernan <sohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:49:45 by sonheres          #+#    #+#             */
/*   Updated: 2023/10/26 13:45:51 by sohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
/* se utiliza para verificar si un carácter o un valor numérico 
representa un carácter ASCII válido. */
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
	int	ascii;

	ascii = 'o';
	printf("original: %i\n", isascii(ascii));
	printf("propia: %i\n", ft_isascii(ascii));
	return (0);
}*/
