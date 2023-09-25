/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:28:14 by sonheres          #+#    #+#             */
/*   Updated: 2023/09/21 10:49:59 by sonheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write (1, "N", 1);
	if (n >= 0)
		write (1, "P", 1);
}

int	main(void)
{
	ft_is_negative(-7);
	write (1, "\n", 1);
	return (0);
}
