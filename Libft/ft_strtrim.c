/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:23:52 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/16 17:36:47 by sonheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
/* Elimina los caracteres de la string 'set' dentro de la string 's1'.
Desde el principio y desde el final hasta que encuentre un caracter que no
pertenezca a 'set'.
Devuelve un string con una reserva de malloc.
Primero creo una función que chequea si la letra que entra por parámetro
está en el string. La llamo después desde la función principal.
En la principal declaro dos variables que recorrerán el string desde
el principio y desde el final.
Primero excluyo errores. Que los parámetros estén vacíos "".
En ese caso llamo a ft_strdup(s1) para que me devuelva una copia "".
Primer bucle para el inicio. Mientras que el índice no sea el fin de cadena 
y mientras coincidad la letra con el parámetro (char_in_str) adelante.
Lo mismo pero desde el final. 
Inicializo 'fin' ->  fin = ft_strlen(s1) - 1; // porque empieza en 0
while(fin >= 0 ...)-> para que el valor de fin no sea negativo.
Si me pasan cadena vacía o si coinciden todas las letras y recorre hasta inicio.
ft_strlen = 0. El valor de 'fin' sería 0 -1 = -1 
Devuelver la función ft_substr con sus parámetros. len será = fin - ini + 1 */
int	char_in_str(char c, char	const	*set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char	const	*s1, char	const	*set)
{
	size_t	ini;
	size_t	fin;

	if (ft_strlen(s1) == 0 || ft_strlen(set) == 0)
	{
		return (ft_strdup(s1));
	}
	ini = 0;
	while (s1[ini] != '\0' && char_in_str(s1[ini], set))
	{
		ini++;
	}
	fin = ft_strlen(s1) - 1;
	while (fin >= 0 && char_in_str(s1[fin], set))
	{
		fin--;
	}
	if (fin <= ini)
	{
		return ("");
	}
	else
		return (ft_substr(s1, ini, fin - ini + 1));
}

/* int	main(void)
{
	char	s1[] = "ggggggggggg";
	char	set[] = "g";
	
	printf ("%s\n", ft_strtrim(s1, set));
	return (0);
} */