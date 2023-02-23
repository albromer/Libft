/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:17:00 by albromer          #+#    #+#             */
/*   Updated: 2023/01/23 10:59:47 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	if (dst > src)
	{
		i = len -1;
		while (i >= 0 && i < len)
		{
			((char *)dst)[i] = ((const char *)src)[i];
			i--;
		}
	}
	else
	{
		while (i < len)
		{
			((char *)dst)[i] = ((const char *)src)[i];
			i++;
		}
	}
	return (dst);
}
//Copia len caracteres de src a dst de forma no destructiva
