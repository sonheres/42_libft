/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohernan <sohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:28:13 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 15:44:01 by sohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <ctype.h>
#include <stdio.h> */
/* La función isdigit() prueba un carácter de dígito decimal. 
Independientemente del lugar en el qu esté del '0' al '9' */
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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
	int	digito;

	digito = 80;
	printf("original: %i\n", isdigit(digito));
	printf("propia: %i\n", ft_isdigit(digito));
	return (0);
} */
