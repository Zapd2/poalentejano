/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafvarga <rafvarga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:33:31 by rafvarga          #+#    #+#             */
/*   Updated: 2024/03/07 13:16:45 by rafvarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 31 || str[i] > 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* int main (void)
{
	char *str = "das\tasa";
	int r = ft_str_is_printable(str);
	printf("%d", r);
	return (0);
} */

//ret 1 IF only printable
//else ret 0
//empty 1
