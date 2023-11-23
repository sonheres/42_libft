/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohernan <sohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:19:46 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 15:49:43 by sohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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
/* int	main(void)
{
	char	str[] = "Aaay Macarena, como me pica!";

	printf("Antes de memset:      %s\n", str);
	ft_memset(str, 'W', strlen(str));
	printf("Despues de ft_memset: %s\n", str);
	memset(str, '!', strlen(str));
	printf("Despues de memset:    %s\n", str);
	return (0);
} */
