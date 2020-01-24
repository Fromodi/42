/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo-ma <pablo-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 10:20:48 by pablo-ma          #+#    #+#             */
/*   Updated: 2020/01/23 10:20:55 by pablo-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		lst_size;
	t_list	*aux;

	lst_size = 0;
	aux = lst;
	if (!aux)
		return (0);
	while (aux->next != NULL)
	{
		lst_size++;
		aux = aux->next;
	}
	if (aux->next == NULL)
		lst_size++;
	return (lst_size);
}
