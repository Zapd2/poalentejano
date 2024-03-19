/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafvarga <rafvarga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:55:37 by rafvarga          #+#    #+#             */
/*   Updated: 2024/03/07 13:19:43 by rafvarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
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
	char	s[] = "TudoAbaixoCacete!";
	
	printf("old: %s\n", s);
	ft_strlowcase(s);
	printf("new: %s\n", s);
	return (0);
} */

//1. verificar se todas as letras sao LOW;
//2. trocar las para LOW;
//3. returnar a STRING
