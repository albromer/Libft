/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 10:18:21 by albromer          #+#    #+#             */
/*   Updated: 2022/12/21 13:58:50 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = -1;
	while (++i < len)
		((unsigned char *)b)[i] = c;
	return (b);
}

/*int main()
{ 
	char b[] = "Hola esto no va a funcionar";
	printf("%s", ft_memset(b, '*', 4));
	return(0);
}*/

/*Copia el carácter C en las primeras posiciones de la cadena que tenemos. 
Ejemplo: ----, que tal*/
