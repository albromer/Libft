/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:48:36 by albromer          #+#    #+#             */
/*   Updated: 2023/01/23 10:41:37 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*int main()
{ 
	printf("%d", ft_isdigit('3'));
	return(0);
}*/
/*Comprueba si un carácter es numérico o no.
Si lo es, devuelve un número entero distinto de 0, si no, devuelve 0*/
