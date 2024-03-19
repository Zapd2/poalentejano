/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafvarga <rafvarga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:28:21 by rafvarga          #+#    #+#             */
/*   Updated: 2024/03/10 11:56:40 by rafvarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

 int main (void)
{
    char src[] = "rafa";
    char dest[10];
    unsigned int n = 3;
    for (int i = 0; i < 10; i++)
    {
        dest[i] = '#';
    }
    ft_strncpy(dest, src, n);
    for (int i = 0; i < 10; i++)
    {
        if (dest[i] == '\0')
        {
            printf ("dest[%d] = \\0\n", i);
        }
        else
        {
            printf ("dest[%d] = %c\n", i, dest[i]);
        }
    }
    return (0);
}

//strncpy copia ate certo ponto a tua string, definido por 'n';
//se o ate 'n' a string nao tiver o caracter '\0', vai copiar sem esse caracter;
//unsigned int ou 'utins; nao podem ter '+' ou '-' ;
