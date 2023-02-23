/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:38:01 by albromer          #+#    #+#             */
/*   Updated: 2023/01/24 11:06:19 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	x;
	int	aux;

	i = 0;
	x = 1;
	aux = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			x *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		aux = (str[i] - '0') + (aux * 10);
		i++;
	}
	aux *= x;
	return (aux);
}
/*int main()
{
	char *a = "--+- 1234";

	printf("%d", ft_atoi(a));
	return(0);
}*/
/*Convierte en tipo int los primeros caracteres que encuentra en un string*/
