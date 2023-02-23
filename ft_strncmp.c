/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:22:54 by albromer          #+#    #+#             */
/*   Updated: 2023/01/23 12:03:21 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*int main()
{
	size_t n;
	
	n = 10;
	printf("%d\n", ft_strncmp("Romero", "Alba", n));
	return (0);
}*/
/*Compara n carácteres de s1 con los de s2. Empieza comparando el primer
carácter de cada cadena. Si son iguales continua con los siguientes hasta
que sean diferentes, hasta que se llegue al caracter nulo o hasta que las
cadenas terminan.
Retorna: 
	<0 si el caracter q no coincide es mas bajo en s1 que en s2
	>0 si el caracter q no coincide es mas alto en s1 que en s2
	0  si ambas cadenas son iguales
*/
