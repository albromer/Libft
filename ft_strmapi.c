/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 10:37:31 by albromer          #+#    #+#             */
/*   Updated: 2023/01/23 13:03:07 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s1;
	size_t	i;

	if (!s || !f)
		return (NULL);
	i = ft_strlen((char *)s);
	s1 = (char *)malloc(sizeof(char) * (i + 1));
	if (!s1)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		s1[i] = f(i, s[i]);
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
/*A cada caracter de s, le aplica la funcion f dando como parametros el indice
de cada caracter dentro de s y el propio caracter. Genera una nueva string con 
el resultado del uso sucesivo de f*/
