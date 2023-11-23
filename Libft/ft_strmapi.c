/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:49:00 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 09:27:50 by sonheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
/* Genera una nueva string con el resultado del uso sucesivo de’f’en 
cada caracter. A cada carácter de la string ’s’ aplica la función ’f’.
Da como parámetro el índice del caracter dentro de 's'.
DEVUELVE: La string creada.  NULL si falla la reserva de memoria.
FT_UPPER. Cambia de minúsculas a mayúsculas.
//para que no de error de no usar la (i) se pondría (void)i;
> if (i % 2 == 0)//si el módulo de dividir entre 2 = 0, es par
> return (c);//tener en cuenta que empieza en 0. Cambia las impares
 */
/* static	char	ft_upper(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (c);
	if (c == ' ')
		c = '*';
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
} */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_s;

	if (!f || !s)
		return (0);
	i = 0;
	while (s[i] != '\0')
		i++;
	new_s = (char *) malloc (sizeof(char) * i + 1);
	if (new_s == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new_s[i] = f(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
