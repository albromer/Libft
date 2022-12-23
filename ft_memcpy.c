/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:31:13 by albromer          #+#    #+#             */
/*   Updated: 2022/12/21 11:38:44 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst1;
	char	*src1;
	size_t	i;

	dst1 = (char *) dst;
	src1 = (char *) src;
	i = 0;
	if (dst == src)
		return (dst);
	while (i < n)
	{
		dst1[i] = src1[i];
		i++;
	}
	dst = dst1;
	return (dst);
}
/*int main()
{
	char s1 [] = "Hola";
	char s2 [] = "Pepito";

	printf("%s", ft_memcpy(s1, s2, 2));
	return(0);
}*/
