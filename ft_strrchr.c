/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:53:18 by albromer          #+#    #+#             */
/*   Updated: 2023/01/23 11:48:51 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	while (i > 0)
	{
		if (s[i] == (char)c)
			return (&((char *)s)[i]);
		i--;
	}
	if (s[i] == (char)c)
		return (&((char *)s)[i]);
	return (NULL);
}

/*int main()
{
	printf("%s", ft_strrchr("mi mama me mima", 'm'));
	return (0);
}*/
/*Busca la última aparición del carácter C en el string dado. Si no se 
encuentra, se devuelve null. C se pasa como int pero se convierte en char.*/
