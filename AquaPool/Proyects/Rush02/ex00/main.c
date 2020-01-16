/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 14:22:50 by apavel            #+#    #+#             */
/*   Updated: 2019/12/01 20:11:50 by apavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "functions.h"

void	two_arguments(char **argv)
{
	int valid;
	int valid_dictionary;

	valid = validate_input(argv[2]);
	valid_dictionary = validate_dictionary(argv[1]);
	if (valid == 1 && valid_dictionary == 1)
		write(1, "Not implemented yet\n", 20);
}

void	one_argument(char **argv)
{
	int valid;

	valid = validate_input(argv[1]);
	if (valid == 1)
	{
		print_number(argv[1]);
	}
	else
	{
		write(1, "Error\n", 6);
		exit(0);
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		one_argument(argv);
	}
	else if (argc == 3)
	{
		two_arguments(argv);
	}
	else
		write(1, "Error\n", 6);
}
