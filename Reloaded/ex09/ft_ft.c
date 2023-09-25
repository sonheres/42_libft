/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:51:50 by sonheres          #+#    #+#             */
/*   Updated: 2023/09/22 17:59:38 by sonheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = *nbr * 2;
	
}

int	main(void)
{
	int	number;

	number = 2;
	printf("Antes: %d\n", number);
	ft_ft(&number);
	printf("Despues: %d\n", number);
}
