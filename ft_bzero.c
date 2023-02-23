/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 11:58:10 by albromer          #+#    #+#             */
/*   Updated: 2023/01/17 11:33:43 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int main()
{
	char s[]= "Hola que tal";

	ft_bzero(s, 4);
	printf("%s", &s[4]);
	return(0);
}*/
/*Borra los datos de n carácteres y los rellena de ceros.*/
