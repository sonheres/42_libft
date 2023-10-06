/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:40:47 by sonheres          #+#    #+#             */
/*   Updated: 2023/10/06 17:42:15 by sonheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return ((char *)(s + i));
		}
		else
		{
			i++;
		}
	}
	return (0);
}

/*int	main(void)
{
	const char	*cadena = "mongolo";
	char		c = 'o';

	char *result = strchr(cadena, c);//mejor declarar la variable (en este caso una puntero a char) y asignar valor por separado.
	if(result != NULL)//cuando el valor no se encuentra en la cadena.
	{
		printf("La cadena queda así: %s\n", result);
	}
	else
	{
		printf("El caracter no se encuentra la cadena.\n");
	}
	char *myresult = ft_strchr(cadena, c);

	if (result != NULL)
	{
		printf("(My cadena queda así: %s \n", myresult);
	}
	else
	{
		printf("My El caracter no se encuentra en la cadena.\n");
	}	
}


//Devuelve la cadena desde la primera posición donde se encuentra la letra que metemos como parámetro.
char	*ft_strchr(const char *s, int c)//const char* quiere decir que es un string de solo lectura.
{
	int	i;//declaro una variable para recorrer el string.

	i = 0;
	while (s[i] != '\0') // Estoy comparando una letra con el valor nulo. Solo puede ser == o !=; nunca < y > porque el '\0' es cero.
	{
		if (s[i] == c) //= es asignar; == es comparar;
		{
			return ((char *)(s + i));//devuelve el inicio del string + la posición de la variable. Y transformo el resultado en un string de tipo char *
		}
		else
		{
			i++;
		}
	}
	return (0);
}

int	main(void)
{
	const char	*cadena = "mongolo";
	char		c = 'o';

	char *result = strchr(cadena, c);//mejor declarar la variable (en este caso una puntero a char) y asignar valor por separado.
	if(result != NULL)//cuando el valor no se encuentra en la cadena.
	{
		printf("La cadena queda así: %s\n", result);
	}
	else
	{
		printf("El caracter no se encuentra la cadena.\n");
	}
	char *myresult = ft_strchr(cadena, c);

	if (result != NULL)
	{
		printf("(My cadena queda así: %s \n", myresult);
	}
	else
	{
		printf("My El caracter no se encuentra en la cadena.\n");
	}	
}
*/