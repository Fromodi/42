/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo-ma <pablo-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 10:14:13 by pablo-ma          #+#    #+#             */
/*   Updated: 2020/01/23 10:14:26 by pablo-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *aux;

	if (alst && *alst && new)
	{
		aux = *alst;
		while (aux->next)
			aux = aux->next;
		aux->next = new;
	}
	else if (*alst == NULL)
		*alst = new;
}
