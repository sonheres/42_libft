/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 13:16:12 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 09:26:25 by sonheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
/* #include <fcntl.h> */
/* Envía la string ’s’al file descriptor dado, seguido de un salto de línea.
PARÁMETROS : La str a enviar y el file descriptor sobre el q. escribir.
NO DEVUELVE NADA. f_autorizada: write.
 */
void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
			i++;
		write(fd, s, i);
		write(fd, "\n", 1);
	}
}
