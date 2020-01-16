/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo-ma <pablo-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 18:50:28 by pablo-ma          #+#    #+#             */
/*   Updated: 2019/11/28 16:11:12 by pablo-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int last;
	int count;

	count = 0;
	while (count < (size) / 2)
	{
		last = tab[count];
		tab[count] = tab[size - 1 - count];
		tab[size - 1 - count] = last;
		count++;
	}
}
