/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:04:52 by albromer          #+#    #+#             */
/*   Updated: 2022/12/20 12:28:29 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ndigit(long n)
{
	int	cont;

	cont = 0;
	if (n < 0)
	{
		n *= -1;
		cont++;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		cont++;
	}
	return (cont);
}

char	*ft_itoa(int n)
{
	char	*s;
	long	num;
	int		i;

	num = n;
	i = ft_ndigit(num);
	s = malloc(sizeof(char) * (i + 1));
	if (!s)
		return (NULL);
	s[i--] = '\0';
	if (n == 0)
		s[0] = '0';
	if (num < 0)
	{
		s[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		s[i] = (num % 10) + '0';
		num = num / 10;
		i--;
	}
	return (s);
}
