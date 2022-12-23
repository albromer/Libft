/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:53:18 by albromer          #+#    #+#             */
/*   Updated: 2022/12/13 12:40:26 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i > 0)
	{
		if (s[i] == (char)c)
			return (&((char *)s)[i]);
		i--;
	}
	if ((char)c == s[i])
		return (&((char *)s)[i]);
	return (0);
}

/*int main()
{
	printf("%s", ft_strrchr("mi mama me mima", 'm'));
	return (0);
}*/
