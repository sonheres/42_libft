/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohernan <sohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 13:16:12 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 15:50:26 by sohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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
/* int	main(void)
{
	char	str[] = "la tira de la abuela\n";
	int	fd;
	int	i;

	i = 0;
	fd = open("putchar_fd.txt", O_CREAT | O_APPEND | O_WRONLY, 0666);
	if (fd == -1)
	{
		perror("Error al abrir el archivo");
		return (1);
	}
	while (str[i] != '\0')
	{
		ft_putchar_fd(str[i], fd);
		i++;
	}
	close(fd);
	return (0);
} */