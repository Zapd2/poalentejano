/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafvarga <rafvarga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:55:37 by rafvarga          #+#    #+#             */
/*   Updated: 2024/03/07 13:18:25 by rafvarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}

/* int main (void)
{
	char	s[] = "EstasASentirUmaPaginaDeHistoria";
	
	printf("old: %s\n", s);
	ft_strupcase(s);
	printf("new: %s\n", s);
	return (0);
} */

//1. verificar se todas as letras sao UP;
//2. trocar las para UP;
//3. returnar a STRING
