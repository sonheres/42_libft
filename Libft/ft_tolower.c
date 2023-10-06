/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:20:55 by sonheres          #+#    #+#             */
/*   Updated: 2023/10/06 13:28:12 by sonheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	else
	{
		return (c);
	}
}

/*int	main(void)
{
	char	letter;
	char	upper;
	
	letter = 'H';
	upper = tolower(letter);
	printf(" letter : %c\n", letter);
	printf(" upper : %c\n", upper);
	letter = 'H';
	upper = ft_tolower (letter);
	printf(" myletter : %c\n", letter);
	printf(" myupper : %c\n", upper);
	return (0);
}

Convierte la letra en minúsculas. Devuelve la propia letra convertida.

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	else
	{
		return (c);
	}
}

int	main(void)
{
	char letter;	//No es necesario declarar mis variables porque no modifico nada.
	char upper;

	letter = '/';
	upper = tolower(letter);
	printf("original letter : %c\n", letter);
	printf("original upper : %c\n", upper);
	letter = '/';
	upper = ft_tolower (letter);
	printf("original myletter : %c\n", letter);
	printf("original myupper : %c\n", upper);
	return (0);
}
*/