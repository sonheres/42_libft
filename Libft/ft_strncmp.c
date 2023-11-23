/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:55:21 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 09:27:54 by sonheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
/* COMPARA LOS CARACTERES DE DOS CADENAS. Siempre van a pasar strings.
// n es un valor constante. Es el tope.
//s1[i] sería una letra concreta, mientras que 'i' es un contador. 
Empieza a contar desde '0'*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		result;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
		{
			result = (unsigned char)s1[i] - (unsigned char)s2[i];
			return (result);
		}
		else
		{
			i++;
		}
	}
	return (0);
}
