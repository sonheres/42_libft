/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohernan <sohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:37:57 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 12:43:05 by sohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
/*Aplica a cada caracter de la str 's' la función 'f' dando como parámetros el
índice de cada carácter dentro de ’s’ y la dirección del propio carácter,
que podrá modificarse si es necesario.
NO DEVUELVE NADA.
 */
/* void	ft_upper_point(unsigned int i, char *c)
{
	if (i % 2 == 0)
		return ;
	if (*c == ' ')
		*c = '*';
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
} */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}
/* int	main(void)
{
	//char	s[] = "buscando en la basura dale";

	ft_striteri(NULL, &ft_upper_point);
	printf("\n%s\n\n", NULL);
	return (0);
} */
