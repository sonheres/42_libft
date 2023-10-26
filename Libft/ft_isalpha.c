/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohernan <sohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:12:15 by sonheres          #+#    #+#             */
/*   Updated: 2023/10/26 12:14:20 by sohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

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

/*int	main(void)
{
	int	caracter;

	caracter = 'r';
	printf("original: %i\n", isalpha(caracter));
	printf("propia: %i\n", ft_isalpha(caracter));
	return (0);
}*/
