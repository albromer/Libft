/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:19:34 by albromer          #+#    #+#             */
/*   Updated: 2022/12/23 11:53:03 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordnums(char const *s, char c)
{
	int	i;
	int	wordscount;

	i = 0;
	wordscount = 0;
	while (s[i])
	{
		if (s[i++] != c && (s[i] == c || s[i] == '\0'))
			wordscount++;
	}
	return (wordscount);
}

char	**ft_split(char const *s, char c)
{
	char	**s1;
	size_t	i;
	size_t	len;

	s1 = malloc(sizeof(char *) * (ft_wordnums (s, c) + 1));
	if (!s1)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c)
			{
				len++;
				s++;
			}
			s1[i++] = ft_substr(s - len, 0, len);
		}
		else
			s++;
	}
	s1[i] = 0;
	return (s1);
}
