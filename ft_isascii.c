/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:25:42 by albromer          #+#    #+#             */
/*   Updated: 2022/12/21 13:42:51 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int main()
{
	printf("%d", ft_isascii(219));
	return(0);
}*/

/*Devuelve un número distinto de 0 si es un carácter ASCII, si no, devuelve 0*/
