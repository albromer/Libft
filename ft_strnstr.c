/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:20:28 by albromer          #+#    #+#             */
/*   Updated: 2023/01/23 12:20:18 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (haystack[h] == '\0')
		return (NULL);
	while (haystack[h] != '\0')
	{
		n = 0;
		while (haystack[h + n] == needle[n] && (h + n) < len)
		{
			if (haystack[h + n] == '\0' && needle[n] == '\0')
				return ((char *)&haystack[h]);
			n++;
		}
		if (needle[n] == '\0')
			return ((char *)&haystack[h]);
		h++;
	}
	return (0);
}
/*Determina si la cadena contiene una subcadena pero no mas de n caracteres.
En caso de que así sea, se indica en que posición aparece. En caso de repetirse
varias veces la subcadena, se muestra la posición de la primera vez que aparece.
Ejemplo: Casa contiene asa y la contiene en la posición 1. 
Haystack es la principal.*/
