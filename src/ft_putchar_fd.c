/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohernan <sohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:52:46 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 12:50:17 by sohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
/* #include <fcntl.h> */
/* Envía el carácter ’c’ al file descriptor especificado.
Parámetros: El carácter a enviar. Y el file descriptor sobre el q. escribir.
NO DEVUELVE NADA. f_Autorizadas : 'write'
> fd = open("putchar_fd.txt", O_CREAT | O_APPEND | O_WRONLY, 0666);
que abra ("nombre fichero", si no existe lo crea porque si no devolvería error 
al abrir | que vaya añadiendo contenido porque si no, escribiría 1 char y 
cerraría | tipo de archivo .txt (escritura en este caso) | permisos) 
> perror("Error al abrir el archivo"); excluir errores
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
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
