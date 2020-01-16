/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo-ma <pablo-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 19:04:14 by pablo-ma          #+#    #+#             */
/*   Updated: 2019/11/27 13:13:07 by pablo-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	counter;
	int	aux;
	int	position;

	counter = 0;
	while (counter < size - 1)
	{
		position = 0;
		while (position < size - 1)
		{
			if (tab[position] > tab[position + 1])
			{
				aux = tab[position];
				tab[position] = tab[position + 1];
				tab[position + 1] = aux;
			}
			position++;
		}
		counter++;
	}
}
