/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:17:02 by sonheres          #+#    #+#             */
/*   Updated: 2023/10/17 17:15:26 by sonheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void    *memchr(const void *s, int c, size_t n)
{
    char    *str;
    size_t  i;
    char    result;

    str = s;
    result = str[i];
    i = 0;
    while (i < n)
    {
        if (str[i] == c)
        {
            return (result);
        }
        else
        {
            i++;
        }
        return (0);
    }
}

int main(void)
{
    char	cadena[] = "parafarmacia";
	char cadena_ft[] = "parafarmacia";
	
	memchr(cadena, 'f', 5);
	printf ("original :%s\n", cadena);

	ft_memset(cadena_ft,'f', 5);
	printf ("propia :%s\n",cadena_ft);
	return(0);
}