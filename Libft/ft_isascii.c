/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:49:45 by sonheres          #+#    #+#             */
/*   Updated: 2023/09/22 19:03:16 by sonheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 177)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	main(void)
{
	int	ascii;

	ascii = 'o';
	printf("original: %i\n", isascii(ascii));
	printf("propia: %i\n", ft_isascii(ascii));
	return (0);
}
