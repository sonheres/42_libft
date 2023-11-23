/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohernan <sohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:59:44 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 15:40:23 by sohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* count = cuantos elementos
size = los bytes que ocupa
i = contador para incicializar a 0 el array. 
NULL si no puede reservar porque no tiene sitio p.ej. 
count + size = nº elementos * bytes que ocupa */
void	*ft_calloc(size_t count, size_t size)
{
	void	*s;

	s = malloc(count * size);
	if (s == NULL)
		return (0);
	ft_bzero(s, count * size);
	return (s);
}
/* int	main(void)
{
	size_t	count;
	size_t	i;
	int		*array;
	int		*myarray;

	count = 5;
	array = (int *)calloc(count, sizeof(int));
	i = 0;
	printf("f_original: ");
	while (i < count)
		printf("%i", array[i++]);
	printf("\n");
	myarray = (int *) ft_calloc(count, sizeof(int));
	i = 0;
	printf("f_my: ");
	while (i < count)
		printf("%i", myarray[i++]);
	printf("\n");
	return (0);
} */
