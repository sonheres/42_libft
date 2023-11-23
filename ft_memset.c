/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:19:46 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 09:26:15 by sonheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
/* La función memset() escribe len bytes de valor c (convertidos a un carácter 
sin firmar) en el str b. */
void	*ft_memset(void *b, int c, size_t len)
{
	char	*n;
	size_t	i;

	n = b;
	i = 0;
	while (i < len)
	{
		n[i] = c;
		i++;
	}
	return (b);
}
