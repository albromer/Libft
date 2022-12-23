/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:10:47 by albromer          #+#    #+#             */
/*   Updated: 2022/12/13 11:51:32 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{	
	write(fd, s, ft_strlen(s));
}
/*int main()
{
	char s[] = "Hola caracola";
	ft_putstr_fd(fd, s, ft_strlen(s));
	return(0);
}*/
