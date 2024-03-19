/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafvarga <rafvarga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 12:19:03 by rafvarga          #+#    #+#             */
/*   Updated: 2024/03/10 13:49:37 by rafvarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	ft_lowercase(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (j == 1)
			{
				str[i] -= 32;
			}
			j = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			j = 0;
		else
			j = 1;
		i++;
	}
	return (str);
}

/* int main(void)
{
    char frase[] = "a nEw+hOPe sTar 2waRs";
    int i = 0;
    ft_lowercase(frase);
    ft_strcapitalize(frase);
    while (frase[i])
    {
        write(1, &frase[i], 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
} */
//1st meti tudo em minuscula;
//2nd Procurei se o meu index apontava para uma letra;
//se SIM e SE 'j = 1' :  meto UPPERcase e 'j' = 0;
//depois 'j' SO voltara a ser 1 SE encontrar um 
//caracter que nao seja  NEM alpha NEM num;
//ate la ira percorrer a string sem acontecer nada;
