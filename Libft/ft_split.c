/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:43:24 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/14 10:53:12 by sonheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
/* Reserva memoria para un array de strings resultante de separar la string’s’
en substrings. Utiliza el caracter ’c’ como delimitador. El array debe terminar 
con un puntero NULL.
ctrl = 0 -> No encuentra 'c'; ctrl = 1 -> Alerta! ya hay un 'c'.
Siempre que pase por la cadena y no lo encuentre tiene que estar en = 0.
if (s[i] != c)
		{
			newstr[j++] = s[i++];
			ctrl = 0;
		}
*delete_inifin; //string recortado.
ini = 0; //empieza punto partida. 
num_words = ft_count_char(newstr, c) + 1; //la uso para dimensionar '**result.
result =  (char **) malloc (sizeof(char *) * (num_words + 1)); 
//char ** array de arrays. char * cada palabra.
result[found_words++] =  ft_substr(newstr, ini, i - ini);
//i ha encontrado 'c' y se para. Ini está en = 0.
ini = i;//coge la posición de 'i' hasta el momento.
*/

/*char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*substr;
	size_t	strlength;

	strlength = ft_strlen(s);
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
	return (ft_substr(s1, ini, fin - ini + 1));
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
} */

/* char	*ft_strdup(const char *s1)
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
} */

static char	*ft_delete_duplo(char *s, char c)
{
	int		i;
	int		j;
	int		ctrl;
	char	*newstr;

	i = 0;
	j = 0;
	ctrl = 0;
	newstr = (char *) malloc (sizeof(char) * (ft_strlen(s) + 1));
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			newstr[j++] = s[i++];
			ctrl = 0;
		}
		else if (ctrl == 0)
		{
			newstr[j++] = s[i++];
			ctrl = 1;
		}
		else
			i++;
	}
	newstr[j] = '\0';
	return (newstr);
}

static	int	ft_count_char(char *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			count = count +1;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char	const *s,	char c)
{
	char	*delete_inifin;
	char	*newstr;
	char	**result;
	int		i;
	int		ini;
	int		num_words;
	char	set[2];
	int		found_words;

	set[0] = c;
	set[1] = '\0';
	delete_inifin = ft_strtrim(s, set);
	newstr = ft_delete_duplo(delete_inifin, c);
	num_words = ft_count_char(newstr, c) + 1;
	if (ft_strlen(newstr) == 0)
		num_words = 0;
	result = (char **) malloc (sizeof(char *) * (num_words + 1));
	i = 0;
	ini = 0;
	found_words = 0;
	while (found_words < num_words)
	{
		if (newstr[i] == c || newstr[i] == '\0')
		{
			result[found_words++] = ft_substr(newstr, ini, i - ini);
			i++;
			ini = i;
		}
		else
			i++;
	}
	result[found_words] = NULL;
	free(delete_inifin);
	free(newstr);
	return (result);
}

/*  int	main (void)
{
	
	char s[] = "gggggggggggg";
	char	c;
	char **result;
	int	i;

	c = 'g';
	i = 0;
	result = ft_split(s, c);
	while (result && result[i]) 
	{
		printf ("%s\n", result[i]);
		i++;
	}
	return (0); 
}   */
