/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:06:53 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/21 21:22:15 by sonheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/* CONVIERTE UNA CADENA ASCII en 'int'.
Permite realizar operaciones con los 'int'.
result = 0; //no es un contador. Se acumulan los dígitos aunque parte de 0
return (result * sign);// que devuelva el resultado en el bucle de los números.
					Mientras haya números, que siga.return (result * sign);*/

static int	ft_extract_number(const char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10;
		result = result + str[i++] - '0';
	}
	return (result);
}

static int	ft_skip_empty_chars(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'\
		|| str[i] == '\v' || str[i] == '\f'\
		|| str[i] == '\r')
	{
		i++;
	}
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;
	int	sign_found;

	i = ft_skip_empty_chars(str);
	sign = 1;
	result = 0;
	sign_found = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-' && sign_found == 0)
		{
			sign = -1;
			sign_found = 1;
		}
		else if (str[i] == '+' && sign_found == 0)
			sign_found = 1;
		else if (str[i] >= '0' && str[i] <= '9')
			return (ft_extract_number(str + i) * sign);
		else
			return (result * sign);
		i++;
	}
	return (result * sign);
}

/* int main(void)
{
	const char str[] = "0 49";
	// const char  str[] = "asrd";
	// const char str[] = "   8+5";
	// const char	str[] = "   0";
	// const char  str[] = " -12";
	printf("original = %i\n", atoi(str));
	printf("my = %i\n", ft_atoi(str));
	return (0);
} */
