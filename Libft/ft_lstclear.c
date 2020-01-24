/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo-ma <pablo-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 10:15:11 by pablo-ma          #+#    #+#             */
/*   Updated: 2020/01/23 20:47:18 by pablo-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;
	t_list	*nxt;

	if (lst && *lst && del)
	{
		aux = *lst;
		while (aux)
		{
			nxt = aux->next;
			ft_lstdelone(aux, del);
			aux = nxt;
		}
		*lst = NULL;
	}
}
