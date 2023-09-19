/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:29:52 by sonheres          #+#    #+#             */
/*   Updated: 2023/09/19 18:09:03 by sonheres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <unistd.h>

void    ft_print_alphabet(void)
{
    char letra;
    
    letra = 'a';

    while (letra < 'z')
    {
        write (1, &letra, 1);
        letra ++;
    }
}
 
 int main(void)
{
    ft_print_alphabet();
 }

