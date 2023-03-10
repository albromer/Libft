/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:35:16 by albromer          #+#    #+#             */
/*   Updated: 2023/01/17 11:06:11 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	while (s[++i])
		if (s[i] == (char)c)
			return (&((char *)s)[i]);
	if ((char)c == '\0')
		return (&((char *)s)[i]);
	return (0);
}

/*int main()
{
	printf("%s", ft_strchr("titi me pregunto", '\0'));
	return (0);
}*/
/*Busca la primera aparición del carácter C en el string dado. Si no se 
encuentra, se devuelve null. C se pasa como int, pero se convierte en char.*/
