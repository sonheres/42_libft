/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohernan <sohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:06:53 by sonheres          #+#    #+#             */
/*   Updated: 2023/10/26 12:19:54 by sohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			i++;
		}
		else if (str[i] == '-')
		{
			sign = -1;
			i++;
		}
		else if (str[i] == '+')
		{
			sign = 1;
			i++;
		}					
		else
		{
			while (str[i] >= '0' && str[i] <= '9')
			{
				result = result * 10;
				result = result + str[i] - '0';
				i++;
				return (result * sign);
			}
		}
	}		
	return (result * sign);
}

int	main(void)
{
	//const char str[] = "  5842";
	//const char  str[] = "asrd";
	//const char str[] = "   8+5";
	const char	str[] = "   0";
	//const char  str[] = " -12";
	printf("original = %i\n", atoi(str));
	printf("my = %i\n", ft_atoi(str));
	return (0);
}

/*CONVIERTE UNA CADENA ASCII en 'int'. Permite realizar operaciones con los 'int'.

int ft_atoi(const char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;									//??
	result = 0; //no es un contador. Se acumulan los dígitos aunque parte de 0
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			i++;
		}
		else if (str[i] == '-')
		{
			sign = -1;
			i++;
		}
		else if (str[i] == '+')
		{
			sign = 1;
			i++;
		}					
		else
		{
			while (str[i] >= '0' && str[i] <= '9')
			{
				result = result * 10;
				result = result + str[i] - '0';
				i++;
			}
			return (result * sign);		// que devuelva el resultado en el bucle de los números. Mientras haya números, que siga.
		}
	}		
	return (result * sign);
}
*/
