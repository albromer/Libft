/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:17:00 by albromer          #+#    #+#             */
/*   Updated: 2022/12/05 14:27:54 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (len == 0 || dst == src)
		return (dst);
	if (s1 > s2)
		while (len-- > 0)
			s1[len] = s2[len];
	else
	{
		while (i < len)
		{
			s1[i] = s2[i];
			i++;
		}
	}
	return (dst);
}
