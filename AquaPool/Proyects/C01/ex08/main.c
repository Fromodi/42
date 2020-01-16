/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo-ma <pablo-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 18:44:59 by pablo-ma          #+#    #+#             */
/*   Updated: 2019/12/16 11:55:25 by darktempl        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <unistd.h>
#include  <stdio.h>

void	 ft_sort_int_tab(int *tab, int size);

int main(void)
{
 int tab_content[] = {4, 1, 3, 5, 9};
 int size = 5;
 int i = 0;

 ft_sort_int_tab(&tab_content[0], 5);
 
 while (i < 5)
	{
	printf("%d", tab_content[i]);
	i++;
	}
}
