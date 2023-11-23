/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohernan <sohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:43:24 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 12:25:58 by sohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
/* Reserva(utilizando malloc un array de strings resultante de separar 
la string’s’ en substrings utilizando el caracter’c’ como delimitador. 
El array debe terminar con un puntero NULL.
FT_STRCOUNT: Cuenta número palabras para reservar el array de strings.
FT_SUBSPLIT: Detecta cuantos arrays necesito.
i = i + ft_strlen(str) - 1; para avanzar hacia la siguiente palabra del str.
	parte de lo que ha devuelto subsplit (1 palabra.)
> array[j] = 0 -> última palabra = NULL
> while (s[++i] != '\0') -> s[i++] aquí porque no se puede hacer i++ al final
	ya que 'i' termina el bucle en la última letra de cada palabra 
	(i = i + ft_strlen(str) - 1;). Por eso parte de (i = -1;)
 */
static void	*ft_delmem(char **array, int j)
{
	int	i;

	i = 0;
	while (i < j)
		free(array[i++]);
	free(array);
	return (NULL);
}

static char	*ft_subsplit(char const *s, char c, int i)
{
	int		len;
	char	*str;
	int		start;

	start = i;
	len = 1;
	while (s[i] != c && s[i] != '\0')
	{
		len++;
		i++;
	}
	i = 0;
	str = (char *) malloc (sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	while (s[start] != c && s[start] != '\0')
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

static int	ft_strcount(const char *s, char c)
{
	int	i;
	int	snbr;
	int	ok;

	i = 0;
	snbr = 0;
	ok = 1;
	while (s[i] != '\0')
	{
		if (s[i] != c && ok == 1)
		{
			snbr++;
			ok = 0;
		}
		if (s[i] == c)
			ok = 1;
		i++;
	}
	return (snbr);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	char	*str;
	int		i;
	int		j;

	if (!s)
		return (0);
	array = (char **) malloc (sizeof(char *) * ((ft_strcount(s, c)) + 1));
	if (array == NULL)
		return (NULL);
	i = -1;
	j = 0;
	while (s[++i] != '\0')
	{
		if (s[i] != c)
		{
			str = ft_subsplit(s, c, i);
			if (!str)
				return (ft_delmem(array, j));
			array[j++] = str;
			i = i + ft_strlen(str) - 1;
		}
	}
	array[j] = 0;
	return (array);
}
/* int	main(void)
{
	char	s[] = "-zapato-gato----julio-agosto-mosto";
	//char	s[] = "Hleo!e";
	char	c;
	char	**res;
	int		i;

	i = 0;
	c = '-';
	//res = (char **) malloc (sizeof(char *) * 100);
	res = ft_split(s, c);
	while (res && res[i])
	{
		printf ("%s\n", res[i]);
		i++;
	}
	return (0);
} */
