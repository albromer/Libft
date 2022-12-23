/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:00:47 by albromer          #+#    #+#             */
/*   Updated: 2022/12/21 13:57:04 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/*int main()
{
	printf("%d", ft_isalnum('*'));
	return(0);
}*/

/*Comrpueba si el carácter pasado es alfanumérico o no. 
Si lo es, devuelve un número distinto de 0, si no, devuelve 0*/
