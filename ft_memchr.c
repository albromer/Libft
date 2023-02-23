/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 10:34:06 by albromer          #+#    #+#             */
/*   Updated: 2023/01/23 12:13:43 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((char *)s)[i] == (char)c)
			return (&((void *)s)[i]);
		i++;
	}
	return (0);
}
/*int main()
{
	char s1 [] = "Mañana hay solecito";

	printf("%s", ft_memchr(s1, 'y', 10));
	return (0);
}*/
/*Busca el caracter c en el string dado. Si no lo encuentra devuelve null.
Si lo encuentra devuelve el string a partir de ese carácter, pero respetando
los n bytes. Ejemplo: y sole*/
