/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 10:34:06 by albromer          #+#    #+#             */
/*   Updated: 2022/12/07 10:59:17 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*s1;

	i = 0;
	s1 = (char *)s;
	while (i < n)
	{
		if (s1[i] == (char)c)
			return ((void *)(s1 + i));
			i++;
	}	
	return (NULL);
}
/*int main()
{
	char s1 [] = "Mañana hay solecito";

	printf("%s", ft_memchr(s1, 'y', 6));
	return (0);
}*/
