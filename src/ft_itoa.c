/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohernan <sohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 09:14:37 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 15:45:21 by sohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Convierte un número entero a una cadena de caracteres.
1. Calculo la longitud para reservar memoria. (números + signo si hay +'\0')
2. While -> división y módulo para sacar los str[i]
3. Swap -> para colocarlos desde la derecha.
> "if (n < 0)" //si es negativo (ej '-573')
> "n = n * sign" //para convertir 'n' en positivo multiplico por -1
> "if (numstr == NULL)" // si da fallo de memoria...
> "numstr[i++] = '0'"// si el parámetro es '0' num[i] = '0'
> "numstr[i++] = sign"//si es negativo, coge el valor sign"
FT_NUMLEN . Devuelve longitud del str que hay que reservar
> "nlen = 1"//si es cero necesito un byte
> 	else if (n < 0)
	nlen = 1;// para que tenga en cuenta el negativo
> n = n / 10" //para desgranar el número y lo guardo en n"
FT_REVERSE. Da la vuelta al str.
> int		i;//contador str
> int		d;//contador duplicado
> while (str[i] != '\0')//'i' queda apuntando al valor nulo pero no entra
> i = i - 1;//i para apuntar al último valor
> while (i >= 0)//para que no salga del str por el inicio
> dup[d++] = str[i--]; //voy copiando retrocediendo.
FT_DUMP. Devuelve el str cambiado a char. Para reducir líneas.
No devuelve nada porque machaca el resultado del str que llega.
FT_ITOA
numstr[i++] = (n % 10) * sign + '0';// *sign para convertirlos en + si es -
reverstr = ft_reverse(numstr);//primero lo guardo en otro str
free (numstr);//después libero mem de numstr(la primera)*/

static size_t	ft_numlen(int n)
{
	size_t	nlen;

	if (n == 0)
		nlen = 1;
	else if (n < 0)
		nlen = 1;
	else
		nlen = 0;
	while (n != 0)
	{
		n = n / 10;
		nlen++;
	}
	return (nlen);
}

static char	*ft_duplistr(const char *s1)
{
	char	*copy;
	int		i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	copy = (char *) malloc (sizeof(char) * i + 1);
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

static	char	*ft_reverse(char	*str)
{
	int		i;
	int		d;
	char	*dup;

	dup = ft_duplistr(str);
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	d = 0;
	i = i - 1;
	while (i >= 0)
	{
		dup[d++] = str[i--];
	}
	dup[d] = '\0';
	return (dup);
}

static	void	ft_dump(int n, char *str)
{
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	if (n < 0)
		sign = -1;
	if (n == 0)
		str[i++] = '0';
	while (n != 0)
	{
		str[i++] = (n % 10) * sign + '0';
		n = n / 10;
	}
	if (sign == -1)
		str[i++] = '-';
	str[i] = '\0';
}

char	*ft_itoa(int n)
{
	char	*numstr;
	char	*reverstr;

	numstr = (char *) malloc (sizeof(char) * ft_numlen(n) + 1);
	if (numstr == NULL)
		return (NULL);
	else
		ft_dump(n, numstr);
	reverstr = ft_reverse(numstr);
	free (numstr);
	return (reverstr);
}
/* int	main(void)
{
	int	n;

	n = 0;
	printf ("El número es: %s\n", ft_itoa(n));
	return (0);
}
 */