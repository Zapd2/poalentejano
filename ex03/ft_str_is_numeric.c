/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafvarga <rafvarga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:04:24 by rafvarga          #+#    #+#             */
/*   Updated: 2024/03/07 13:10:36 by rafvarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		i++;
	}
	if (str[i] == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/* int main(void)
{
    char str[] = "a";
    int r;
    r = ft_str_is_numeric(str);
    printf("%d", r);
    return (0);
} */
//return 1 IF str ONLY have NUMBERS
//return 0 IF NOT
//return 1 IF EMPTY
