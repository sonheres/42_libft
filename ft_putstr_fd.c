/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:53:26 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 09:26:37 by sonheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
/* #include <fcntl.h> */
/* Envía la string ’s’ al file descriptor especificado.
Parámetros: La str a enviar. Y el file descriptor sobre el q. escribir.
NO DEVUELVE NADA. f_Autorizadas : 'write'
*/
void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
			i++;
		write(fd, s, i);
	}
}
