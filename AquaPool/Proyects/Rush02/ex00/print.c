/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 18:21:15 by apavel            #+#    #+#             */
/*   Updated: 2019/12/01 20:04:45 by apavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "functions.h"
#include <stdlib.h>
#include <stdio.h>

char	*generate_zero(int n, char cc)
{
	char	*c;
	int		i;

	c = malloc(n + 2);
	i = 1;
	c[0] = cc;
	while (i <= n)
	{
		c[i] = '0';
		i++;
	}
	c[i] = '\0';
	return (c);
}

void	print_search_pos_3(char *character, char *input, int sz)
{
	search(character, input);
	search(generate_zero(sz, '1'), input);
}

void	print_search_pos_2(char *character, char *input, int sz)
{
	search(generate_zero(sz, character[0]), input);
}

void	print_search_pos_1(char *character, char *input, int sz)
{
	search(character, input);
	if ((sz) % 3 == 0 && sz + 1 > 1)
		search(generate_zero(sz, '1'), input);
}

void	print_number(char *str)
{
	char	*input;
	char	*generated_number;
	int		i;
	int		pos;
	char	character[2];

	input = get_data_from_file();
	i = 0;
	pos = ft_strlen(str) - (ft_strlen(str) / 3) * 3;
	character[1] = '\0';
	while (i < ft_strlen(str))
	{
		if (pos == 0)
			pos = 3;
		character[0] = str[i];
		if (pos == 3 && character[0] != '0')
			print_search_pos_3(character, input, pos - 1);
		else if (pos == 2 && character[0] != '0')
			print_search_pos_2(character, input, pos - 1);
		else if (pos == 1 && character[0] != '0')
			print_search_pos_1(character, input, ft_strlen(str) - i - 1);
		pos--;
		i++;
	}
}
