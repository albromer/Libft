/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:54:25 by albromer          #+#    #+#             */
/*   Updated: 2022/12/07 11:39:42 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	x;
	size_t	ilen;
	size_t	xlen;

	i = 0;
	x = 0;
	while (dst[x] != '\0')
		x++;
	ilen = x;
	xlen = ft_strlen(src);
	if (dstsize == 0 || dstsize <= ilen)
		return (xlen + dstsize);
	while (src[i] != '\0' && i < dstsize - ilen - 1)
	{
		dst[x] = src[i];
		i++;
		x++;
	}
	dst[x] = '\0';
	return (ilen + xlen);
}
/*int main()
{
	char src[] = "caracoli";
	char dst[] = "Holi";

	printf("%zu\n", ft_strlcat(dst, src, 12));
	printf("%s\n", dst);
	return(0);
}*/
