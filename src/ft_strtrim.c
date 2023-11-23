/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohernan <sohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:23:52 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 15:57:59 by sohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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
static char	char_in_str(char c, char	const	*set)
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

static size_t	ft_slen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

static char	*ft_duplostr(const char *s1)
{
	char	*copy;
	int		i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	copy = (char *) malloc (sizeof(char) * i + 1);
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

static char	*ft_subs(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*substr;
	size_t	strlength;

	strlength = ft_slen(s);
	if (start >= strlength || strlength == 0 || len == 0)
	{
		substr = (char *)malloc (sizeof(char) * 1);
		if (substr == NULL)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if (start + len > strlength)
		len = strlength - start;
	substr = (char *) malloc (sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	i = 0;
	j = start;
	while (i < len && s[j] != '\0')
		substr[i++] = s[j++];
	substr[i] = '\0';
	return (substr);
}

char	*ft_strtrim(char	const	*s1, char	const	*set)
{
	size_t	ini;
	size_t	fin;

	if (!s1 || !set)
		return (0);
	if (ft_slen(s1) == 0 || ft_slen(set) == 0)
	{
		return (ft_duplostr(s1));
	}
	ini = 0;
	while (s1[ini] != '\0' && char_in_str(s1[ini], set))
	{
		ini++;
	}
	fin = ft_slen(s1) - 1;
	while (fin >= 0 && char_in_str(s1[fin], set))
	{
		fin--;
	}
	if (fin < ini)
	{
		return ("");
	}
	else
		return (ft_subs(s1, ini, fin - ini + 1));
}

/* int	main(void)
{
	//char	s1[] = "gggasdfirggg";
	//char	set[] = "g";
	printf ("%s\n", ft_strtrim(NULL, NULL));
	return (0);
} */
