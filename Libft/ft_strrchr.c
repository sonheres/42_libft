/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:43:52 by sonheres          #+#    #+#             */
/*   Updated: 2023/10/06 18:34:58 by sonheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*result;
	
	result = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			result = (char *)(s + i);
		}
		i++;
	}
	return (result);
}

/*int	main(void)
{
	const char	*cadena = "mongolo";
	char		c = 't';

	char *result = strrchr(cadena, c);//mejor declarar la variable (en este caso una puntero a char) y asignar valor por separado.
	if(result != NULL)//cuando el valor no se encuentra en la cadena.
	{
		printf("La cadena queda así: %s\n", result);
	}
	else
	{
		printf("El caracter no se encuentra la cadena.\n");
	}
	char *myresult = ft_strrchr(cadena, c);

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
char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*result;		//declaro una variable para ir guardando la posición de las coincidencias.
	result = NULL;			//inicializo desde NULL la variable. Según recorra el string irá machacando los resultados.
	i = 0;
	while (s[i] != '\0')	// Mientras i(string) no sea el fin de cadena...
	{
		if (s[i] == c)		// Si i(string) coincida con el parámetro que he metido...
		{
			result = (char *)(s + i);	// Mete en la variable "result" la posición (inicio string + recorrido de i) y cámbialo de solo lectura a char*.
		}
		i++;
	}
	return (result);
}

int	main(void)
{
	const char	*cadena = "mongolo";
	char		c = 't';

	char *result = strrchr(cadena, c);//mejor declarar la variable (en este caso una puntero a char) y asignar valor por separado.
	if(result != NULL)//cuando el valor no se encuentra en la cadena.
	{
		printf("La cadena queda así: %s\n", result);
	}
	else
	{
		printf("El caracter no se encuentra la cadena.\n");
	}
	char *myresult = ft_strrchr(cadena, c);

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