/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:38:42 by albromer          #+#    #+#             */
/*   Updated: 2022/12/15 13:26:28 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		i1;
	int		i2;

	if (!s1 || !s2)
		return (NULL);
	s = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s)
		return (NULL);
	i1 = 0;
	while (s1[i1])
	{
		s[i1] = s1[i1];
		i1++;
	}
	i2 = 0;
	while (s2[i2])
	{
		s[i1] = s2[i2];
		i1++;
		i2++;
	}
	s[i1] = '\0';
	return (s);
}
