/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohernan <sohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:39:45 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 15:50:40 by sohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <fcntl.h> */
/* Envía el número ’n’al file descriptor dado.
PARÁMETROS: El número 'n' que enviar. Y el 'fd' sobre el q. escribir.
FT_CONVERT: Convierte el 'n' en 'char'.
> char	n[10];//creo un str de para que quepa el máx. "2147483647"
> i--;// para que apunte al último char que he escrito
> while (i >= 0)// el cero también lo voy a necesitar. Recorro hacia atrás.
 */
static void	ft_convert(int nb, int fd)
{
	char	n[10];
	int		i;

	if (nb == 0)
		write (fd, "0", 1);
	i = 0;
	while (nb != 0)
	{
		n[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write (fd, &n[i], 1);
		i--;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write (fd, "-2", 2);
		n = 147483648;
	}
	else if (n < 0)
	{
		write (fd, "-", 1);
		n = -n;
	}
	ft_convert (n, fd);
}
/* int	main(void)
{
	int	fd;
	int	n;

	//n = -2147483648;
	//n = 5874985;
	n = -85694;
	fd = open("putnbr_fd.txt", O_CREAT | O_APPEND | O_WRONLY, 0666);
	if (fd == -1)
	{
		perror("Error al abrir el archivo");
		return (1);
	}
	ft_putnbr_fd(n, fd);
	close(fd);
	return (0);
} */
