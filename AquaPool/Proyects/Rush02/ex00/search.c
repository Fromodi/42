/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 19:19:52 by apavel            #+#    #+#             */
/*   Updated: 2019/12/01 19:30:53 by pablo-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "functions.h"

void	search(char *str, char *input)
{
	char	*exists;
	int		i;

	exists = ft_strstr(input, str);
	if (exists == 0)
	{
		write(1, "DictError\n", 10);
		exit(0);
	}
	i = 0;
	while (exists[i] != ':')
		i++;
	i++;
	while (exists[i] != '\n')
	{
		(write(1, &exists[i], 1));
		i++;
	}
	write(1, " ", 1);
}
