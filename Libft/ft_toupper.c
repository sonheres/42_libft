/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:47:10 by sonheres          #+#    #+#             */
/*   Updated: 2023/10/06 13:18:19 by sonheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	else
	{
		return (c);
	}
}

/* int	main(void)
{
	char	letter;
	char	upper;
	char	myletter;
	char	myupper;

	letter = 'e';
	upper = toupper (letter);
	printf("original letter : %c\n", letter);
	printf("original upper : %c\n", upper);
	myletter = 'e';
	myupper = ft_toupper (myletter);
	printf("original myletter : %c\n", myletter);
	printf("original myupper : %c\n", myupper);
	return (0);
}

Convierte la letra en mayúsculas. Devuelve la propia letra convertida.

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')// a = 97 && z = 122
	{
		return (c - 32);
	}
	else
	{
		return(c);
	}
}

int	main(void)
{
	char letter;	//No es necesario declarar mis variables porque no modifico nada.
	char upper;
	char myletter;
	char myupper;

	letter = 'e';
	upper = toupper (letter);
	printf("original letter : %c\n", letter);
	printf("original upper : %c\n", upper);
	myletter = 'e';
	myupper = ft_toupper (myletter);
	printf("original myletter : %c\n", myletter);
	printf("original myupper : %c\n", myupper);
	return (0);
}
*/