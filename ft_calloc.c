/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:54:58 by albromer          #+#    #+#             */
/*   Updated: 2023/01/17 12:45:30 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*s1;

	s1 = malloc(count * size);
	if (!s1)
		return (NULL);
	ft_bzero(s1, count * size);
	return (s1);
}
/*Calloc asigna la memoria al igual que malloc. 
Solo que calloc establece la memoria en 0*/
