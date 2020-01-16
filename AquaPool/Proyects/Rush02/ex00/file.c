/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 17:14:12 by apavel            #+#    #+#             */
/*   Updated: 2019/12/01 20:06:31 by apavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <unistd.h>

void	trim_spaces(char *from, char *to)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (from[i] != '\0')
	{
		if (from[i] != ' ')
		{
			to[j] = from[i];
			j++;
		}
		i++;
	}
}

int		get_dictionary_size(void)
{
	char	*c;
	int		fd;
	int		size;

	c = malloc(1);
	size = 0;
	fd = open("dictionary", O_RDONLY);
	while (read(fd, c, 1))
	{
		if (*c == '\0')
			break ;
		size++;
	}
	close(fd);
	return (size);
}

char	*get_data_from_file(void)
{
	char	*c;
	char	*input;
	int		fd;
	int		dictionary_size;

	dictionary_size = get_dictionary_size();
	c = malloc(dictionary_size);
	fd = open("dictionary", O_RDONLY);
	read(fd, c, dictionary_size);
	close(fd);
	input = malloc(dictionary_size);
	trim_spaces(c, input);
	free(c);
	return (input);
}
