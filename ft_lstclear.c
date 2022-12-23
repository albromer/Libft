/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albromer <albromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:24:51 by albromer          #+#    #+#             */
/*   Updated: 2022/12/20 10:52:11 by albromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	while (*lst)
	{
		aux = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = aux;
	}
}
