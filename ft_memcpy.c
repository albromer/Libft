/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:31:13 by albromer          #+#    #+#             */
/*   Updated: 2023/01/23 10:44:24 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
	{
		return (NULL);
	}	
	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((const char *)src)[i];
		i++;
	}
	return (dst);
}
/*int main()
{
	char s1 [] = "Hola";
	char s2 [] = "Pepito";

	printf("%s", ft_memcpy(s1, s2, 2));
	return(0);
}*/
/*Copia n carácteres de src a dst. Ejemplo:
S1 = "Hola"
S2 = "pepito"
N = 4
Nueva string = "pepi"*/
