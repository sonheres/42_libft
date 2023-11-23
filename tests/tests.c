/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:57:05 by sonheres          #+#    #+#             */
/*   Updated: 2023/11/23 08:40:53 by sonheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"
#include <ctype.h>
#include <fcntl.h>

int test_ft_atoi(void)
{
	const char str[] = "0 49";
	// const char  str[] = "asrd";
	// const char str[] = "   8+5";
	// const char	str[] = "   0";
	// const char  str[] = " -12";
	printf("original = %i\n", atoi(str));
	printf("my = %i\n", ft_atoi(str));
	return (0);
}

int	test_ft_bzero(void)
{
	char	cadena[] = "Cambio a cero";
	char	cadena_ft[] = "Cambio a cero";
	bzero(cadena, (2));
	printf ("original:%s\n",cadena);
	printf ("long_original: %lu\n",strlen(cadena));

	ft_bzero(cadena_ft, (2));
	printf ("propia :%s\n",cadena_ft);
	printf ("long_propia: %lu\n",strlen(cadena_ft));
	return(0);
} 

/* creo dos arrays para comprobar la función original. 
(int) cast al asignar valor al array llamando a la función porque es void.
Creo arrays de 5 y después con el while voy asignando ceros.*/
int	test_ft_calloc(void)
{
	size_t	count;
	size_t	i;
	int		*array;
	int		*myarray;

	count = 5;
	array = (int *)calloc(count, sizeof(int));
	i = 0;
	printf("f_original: ");
	while (i < count)
		printf("%i", array[i++]);
	printf("\n");
	myarray = (int *) ft_calloc(count, sizeof(int));
	i = 0;
	printf("f_my: ");
	while (i < count)
		printf("%i", myarray[i++]);
	printf("\n");
	return (0);
}

int	test_ft_isalnum(void)
{
	int	charnum;

	charnum = 'K';
	printf("original: %i\n", isalnum(charnum));
	printf("propia: %i\n", ft_isalnum(charnum));
	return (0);
}

int	test_ft_isalpha(void)
{
	int	caracter;

	caracter = 'r';
	printf("original: %i\n", isalpha(caracter));
	printf("propia: %i\n", ft_isalpha(caracter));
	return (0);
}

int	test_ft_isascii(void)
{
	int	ascii;

	ascii = 'o';
	printf("original: %i\n", isascii(ascii));
	printf("propia: %i\n", ft_isascii(ascii));
	return (0);
}

int	test_ft_isdigit(void)
{
	int	digito;

	digito = 80;
	printf("original: %i\n", isdigit(digito));
	printf("propia: %i\n", ft_isdigit(digito));
	return (0);
}

int	test_ft_isprint(void)
{
	int	print;

	print = '~';
	printf("original: %i\n", isprint(print));
	printf("propia: %i\n", ft_isprint(print));
	return (0);
}

int	test_ft_itoa(void)
{
	int	n;

	n = 0;
	printf ("El número es: %s\n", ft_itoa(n));
	return (0);
}

int	test_ft_memchr(void)
{
	char cadena[] = "parafarmacia";
	char cadena_ft[] = "parafarmacia";

	char *result = memchr(cadena, 'a', 8); // tiene que devolver un puntero (*)
	char *myresult = ft_memchr(cadena_ft, 'a', 8);

	printf("original :%s\n", result);
	printf("propia :%s\n", myresult);
	return (0);
}

int	test_ft_memcmp(void)
{
	char	s1[] = "lkakdsladf";
	char	s2[] = "400";

	int	result = memcmp(s1, s2, 4);
	int	myresult = ft_memcmp(s1, s2, 4);

	if (result == 0)
	{
		printf ("Las cadenas son iguales. \n");
	}
	else if (result > 0)
	{
		printf ("s1 es mayor que s2. \n");
	}
	else
	{
		printf ("s1 es menor que s2. \n");
	}
	if (myresult == 0)
	{
		printf ("Mis cadenas son iguales. \n");
	}
	else if (myresult > 0)
	{
		printf ("my s1 es mayor que s2. \n");
	}
	else
	{
		printf ("my s1 es menor que s2. \n");
	}
	return (0);
}

int	test_ft_memcpy(void)
{
	char const	cad_src[] = "dime con quién andas....";
	char *cad_dst;
	char *cad_dst_propio;

	cad_dst = (char *)malloc(strlen(cad_src) + 1);
	cad_dst_propio = (char *)malloc(strlen(cad_src) + 1);
	memcpy(cad_dst, cad_src, 3 );
	printf ("resultado con original :%s\n", cad_dst);
	free(cad_dst);
	ft_memcpy(cad_dst_propio, cad_src, 3 );
	printf ("resultado con propia :%s\n", cad_dst_propio);
	free(cad_dst_propio);
	return(0);
}

int	test_ft_memmove(void)
{
	char	str[] = "Mamma mia";
	char	*src;

	//str = "H";
	src = (char *) malloc (sizeof(char) * (ft_strlen(str) + 1));
	memcpy(src, str, 47);
	//OJO LA SIGUIENTE LINEA ESTAn PARTIDAS
	printf("src despues de ft_memmove:\n%s\n", 
	ft_memmove((void *)src + -10, src, 3));
	//printf("src despues de memmove:\n%s\n", 
	memmove((void *)src - 10, src, 3);
	return (0);
}

int	test_ft_memset(void)
{
	char	str[] = "Aaay Macarena, como me pica!";

	printf("Antes de memset:      %s\n", str);
	ft_memset(str, 'W', strlen(str));
	printf("Despues de ft_memset: %s\n", str);
	memset(str, '!', strlen(str));
	printf("Despues de memset:    %s\n", str);
	return (0);
}

int	test_ft_putchar_fd(void)
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
}

int	test_ft_putendl_fd(void)
{
	//char	str[] = "la cuchara del cajón";
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
}

int	test_ft_putnbr_fd(void)
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
}

int	test_ft_putstr_fd(void)
{
	char	str[] = "la abuelita conductora";
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
}

int	test_ft_split(void)
{
	char	s[] = "-zapato-gato----julio-agosto-mosto";
	//char	s[] = "Hleo!e";
	char	c;
	char	**res;
	int		i;

	i = 0;
	c = '-';
	//res = (char **) malloc (sizeof(char *) * 100);
	res = ft_split(s, c);
	while (res && res[i])
	{
		printf ("%s\n", res[i]);
		i++;
	}
	return (0);
}

int	test_ft_strchr(void)
{
	const char	str[] = "";
	int			c;

	c = 'e' + 1024;
	printf("Funcion original:     %s\n", strchr(str, c));
	printf("Funcion propio hecho: %s\n", ft_strchr(str, c));
	return (0);
}

/* creo dos *strings para comprobar la función original. */
int	test_ft_strdup(void)
{
	const	char	s1[] = "Living la vida loca";
	char	*str;
	char	*mystr;

	str = strdup(s1);
	printf("f_original: %s\n", str);
	mystr = ft_strdup(s1);
	printf("f_my: %s\n", mystr);
	return(0);
}

void	ft_upper_point(unsigned int i, char *c)
{
	if (i % 2 == 0)
		return;
	if (*c == ' ')
		*c = '*';
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

int	test_ft_striteri(void)
{
	char	s[] = "buscando en la basura dale";

	ft_striteri(s, &ft_upper_point);
	printf("\n%s\n\n", s);
	return (0);
}
/* función para probar */


int	test_ft_strjoin(void)
{
	char	s1[] = "Hola hola hola hola...";
	char	s2[] = "no vengas sola...";

	printf ("%s\n", ft_strjoin(s1, s2));
	return (0);
}

int	test_ft_strlcat(void)
{
	char			src[] = "pajaro fluvial";
	char			dest[30] = "Eres un ";
	size_t	size;

	size = -1;
	//printf("%lu\n", size);
	//OJO LINEAS PARTIDAS
	printf ("Funcion original\nsize = %lu\ndest = \
	%s\nres = %lu\n", size, dest, strlcat(dest, src, size));
	printf ("Mi funcion\nsize = %lu\ndest = %s\nres = \
	%lu\n", size, dest, ft_strlcat(dest, src, size));
	return (0);
}

int	test_ft_strlcpy(void)
{
	char			str[] = "Ojete calores son amores";
	char			dest[50];
	unsigned int	size;
	size_t			i;

	size = 13;
	//i = strlcpy(dest, str, size);
	i = ft_strlcpy(dest, str, size);
	printf("srlcpy i = %lu\n", i);
	printf("srlcpy dest = %s\n", dest);
	return (0);
}

int	test_ft_strlen(void)
{
	const char	*micadena = "";

	printf ("original :%lu\n", strlen (micadena));
	printf ("propia :%lu\n", ft_strlen (micadena));
	return (0);
}

int	test_ft_strmapi(void)
{
	const	char	s[] = "Esta leche está buena";
	printf("\nOriginal : %s\n\n", s);
	printf("Cambiado : %s\n\n", ft_strmapi(s, &ft_toupper));//direcc. función
	return (0);
}

int	test_ft_strncmp(void)
{
	char	s1[] = "456";
	char	s2[] = "586";

	int	result = strncmp(s1, s2, 1);
	int	myresult = ft_strncmp(s1, s2, 1);
	
	if (result == 0)
	{
		printf ("Las cadenas son iguales. \n");
	}
	else if (result > 0)
	{
		printf ("s1 es mayor que s2. \n");
	}	
	else
	{
		printf ("s1 es menor que s2. \n");
	}
	if (myresult == 0)
	{
		printf ("Mis cadenas son iguales. \n");
	}
	else if (myresult > 0)
	{
		printf ("my s1 es mayor que s2. \n");
	}	
	else
	{
		printf ("my s1 es menor que s2. \n");
	}
	return (0);
}

int	test_ft_strnstr(void)
{
	const char	haystack[] = "Eeeeeese cccccaballo de la Pradera";
	const char	neddle[] = "ca";
	size_t		len;

	len = 15;
	printf("Funcion original: %s\n", strnstr(haystack, neddle, len));
	printf("Funcion mio:      %s\n", ft_strnstr(haystack, neddle, len));
	return (0);
}

int	test_ft_strrchr(void)
{
	const char	str[] = "Se cago en Missuri";
	int			c;

	c = '\0';// + 256;
	//c = 333;
	printf ("%i\n", c);
	printf("Funcion original =     %s\n", strrchr(str, c));
	printf("Funcion hecho propio = %s\n%p", ft_strrchr(str, c), 
	ft_strrchr(str, c));
	return (0);
}

int	test_ft_strtrim(void)
{
	//char	s1[] = "gggasdfirggg";
	//char	set[] = "g";
	printf ("%s\n", ft_strtrim("abcdba", "acb"));
	return (0);
}

int	test_ft_substr(void)
{
	char			*s = "HOLA";

	printf("Subcadena: %s\n", ft_substr(s, 4, 0));
	return (0);
}

int	test_ft_tolower(void)
{
	int		c;

	c = 'W';
	printf("Funcion original:     %c\n", tolower(c));
	printf("Funcion propio vasco: %c\n", ft_tolower(c));
	return (0);
}

int	test_ft_toupper(void)
{
	int		c;

	c = 'p';
	printf("Funcion original:     %c\n", toupper(c));
	printf("Funcion propio vasco: %c\n", ft_toupper(c));
	return (0);
}

int	main(void)
{
	return test_ft_toupper();
}
