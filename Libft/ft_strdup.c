/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:51:59 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/08 17:44:39 by sonheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

/* Asigna la memoria necesaria para realizar una copia de s1.
Devuelve un puntero a ella.
Si no ha suficiente memoria devuelve NULL. 
Declaro un puntero a char para la cadena de copia. 
Y un contador.*/
char	*ft_strdup(const char *s1)
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

/* creo dos *strings para comprobar la función original. */
/* int	main(void)
{
	const	char	s1[] = "Living la vida loca";
	char	*str;
	char	*mystr;

	str = strdup(s1);
	printf("f_original: %s\n", str);
	mystr = ft_strdup(s1);
	printf("f_my: %s\n", mystr);
	return(0);
} */
