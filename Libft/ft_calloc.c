/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo-ma <pablo-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 13:03:22 by pablo-ma          #+#    #+#             */
/*   Updated: 2020/01/20 13:03:38 by pablo-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;
	size_t	i;

	i = -1;
	p = (char*)malloc(count * size);
	if (p == NULL)
		return (NULL);
	while (++i < count * size)
	{
		p[i] = '\0';
	}
	return (p);
}
