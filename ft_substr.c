/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:35:43 by albromer          #+#    #+#             */
/*   Updated: 2022/12/15 13:29:24 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	i;
	size_t	caststart;

	caststart = (size_t)start;
	i = 0;
	if (ft_strlen(s) == 0)
		return (ft_strdup(""));
	if (ft_strlen(s) < caststart)
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	s1 = (char *)malloc(sizeof(char) * (len + 1));
	if (!s1)
		return (NULL);
	while (i < len)
	{
		s1[i] = s[caststart];
		i++;
		caststart++;
	}
	s1[i] = '\0';
	return (s1);
}
