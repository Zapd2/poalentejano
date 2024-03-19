/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafvarga <rafvarga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:08:03 by rafvarga          #+#    #+#             */
/*   Updated: 2024/03/10 11:55:02 by rafvarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*src)
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* int	main(void)
{
	char	s[] = "um teste fantastico";
	char	d[] = "";
	
	printf("before I call the function: %s\n", s);
	ft_strcpy(d, s);
	printf("after I call the function: %s\n", d);
	return (0);
} */
