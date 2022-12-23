/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:53:15 by albromer          #+#    #+#             */
/*   Updated: 2022/12/21 13:57:40 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/*int main()
{
	printf("%d", ft_isalpha('G'));
	return(0);
}
*/

/*Comprueba si un carácter es alfabético o no. 
Si lo es, devuelve un número entero distinto de 0, si no, devuelve 0*/
