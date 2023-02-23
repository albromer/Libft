/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:35:43 by albromer          #+#    #+#             */
/*   Updated: 2023/01/24 10:58:56 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		new = malloc(1 * sizeof(char));
	else if ((ft_strlen(s) - start) > len)
		new = malloc((len + 1) * sizeof(char));
	else
		new = malloc((ft_strlen(s) - start + 1) * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	while (i < len && (size_t)start < ft_strlen(s))
	{
		new[i] = s[start];
		i++;
		start++;
	}
	new[i] = '\0';
	return (new);
}
/*Realiza una subcadena de la cadena original. Desde el punto de inicio start
y con la longitud dada en len. Ejemplo: 
	String: Soy de malaga
	Start: 3
	Len: 5
	Substring: _de_m
*/
