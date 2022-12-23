/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:26:53 by albromer          #+#    #+#             */
/*   Updated: 2022/12/21 13:56:35 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	a;

	a = 0;
	while (s[a])
		a++;
	return (a);
}

/*int main()
{
	printf("%lu", ft_strlen("albaromero"));
	return(0);
}*/

/*Toma una cadena y devuelve su longitud. 
El valor devuelto es de tipo "size_t", es decir un entero sin signo*/
