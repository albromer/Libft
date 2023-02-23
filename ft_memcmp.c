/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:21:46 by albromer          #+#    #+#             */
/*   Updated: 2023/01/17 12:00:15 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ss1;
	const unsigned char	*ss2;

	i = 0;
	ss1 = (const unsigned char *)s1;
	ss2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}
/*int main()
{
	char ss1[] = "Hola caracola";
	char ss2[] = "Mañana llueve";

	printf("%d", ft_memcmp(ss1, ss2, 6));
	return(0);
}*/
/*Compara los primeros n bytes de de s1 y s2. Devuelve 0 si todos coinciden y
un valor distinto dependiendo de cual es mayor o menor. Retorna:
	<0 si el primer byte que no coincide es mas bajo en s1 que en s2
	>0 si el primer byte que no coincide es mas alto en s1 que en s2
	0  si el contenido de ambas cadenas son iguales
*/
