/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohernan <sohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:28:19 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 15:55:29 by sohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/* int	main(void)
{
	const char	*micadena = "";

	printf ("original :%lu\n", strlen (micadena));
	printf ("propia :%lu\n", ft_strlen (micadena));
	return (0);
} */
