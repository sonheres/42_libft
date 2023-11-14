/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:11:07 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/09 11:21:54 by sonheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
/* Devuelve una nueva string. NULL si falla la reserva de mmria. 
Declaro una variable para la longitud de la nueva str, otra para que será el 
contador de s1 y s2 [i], y otra que será el contador de 'newstr'[j].
Excluyo errores para que devuelva NULL si alguna de las dos cadenas es NULL.
Asigno valor a la variable que recoge la longitud nueva.
-> newlen = ft_strlen(s1) + ft_strlen(s2)
Reservo memoria para 'newstr'.
Bucle para copiar. Inicializo dos variables = 0. Primero pasar por s1 y después
por s2. Antes i = 0.
*/
char	*ft_strjoin(char	const	*s1, char	const	*s2)
{
	char	*newstr;
	int		i;
	int		j;
	size_t	newlen;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	newlen = ft_strlen(s1) + ft_strlen(s2);
	newstr = (char *) malloc (sizeof(char) * (newlen + 1));
	if (newstr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		newstr[j++] = s1[i++];
	}
	i = 0;
	while (s2[i] != '\0')
	{
		newstr[j++] = s2[i++];
	}
	newstr[j] = '\0';
	return (newstr);
}

/* int	main (void)
{
	char	s1[] = "Hola hola hola hola...";
	char	s2[] = "no vengas sola...";

	printf ("%s\n", ft_strjoin(s1, s2));
	return (0);
} */