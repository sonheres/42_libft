/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 13:16:12 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/17 16:31:15 by sonheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
#include <fcntl.h>
/* Envía la string ’s’al file descriptor dado, seguido de un salto de línea.
PARÁMETROS : La str a enviar y el file descriptor sobre el q. escribir.
NO DEVUELVE NADA. f_autorizada: write.
 */
void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		write(fd, s, ft_strlen(s));
		write(fd, "\n", 1);
	}
}
/* int	main(void)
{
	char	str[] = "la cuchara del cajón";
	int	fd;

	fd = open("putendl_fd.txt", O_CREAT | O_APPEND | O_WRONLY, 0666);
	if (fd == -1)
	{
		perror("Error al abrir el archivo");
		return (1);
	}
	ft_putendl_fd(NULL, fd);
	close(fd);
	return (0);
} */
