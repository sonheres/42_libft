/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:53:26 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/17 13:15:29 by sonheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
#include <fcntl.h>
/* Envía la string ’s’ al file descriptor especificado.
Parámetros: La str a enviar. Y el file descriptor sobre el q. escribir.
NO DEVUELVE NADA. f_Autorizadas : 'write'
*/
void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}

/* int	main(void)
{
	char	str[] = "la tecla del piano\n";
	int	fd;

	fd = open("putchar_fd.txt", O_CREAT | O_APPEND | O_WRONLY, 0666);
	if (fd == -1)
	{
		perror("Error al abrir el archivo");
		return (1);
	}
	ft_putstr_fd(str, fd);
	close(fd);
	return (0);
} */
