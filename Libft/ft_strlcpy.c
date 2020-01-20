/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo-ma <pablo-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 21:30:19 by pablo-ma          #+#    #+#             */
/*   Updated: 2020/01/20 10:36:24 by pablo-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	count;
	unsigned int	i;

	if (dest == NULL || src == NULL)
		return (0);
	count = 0;
	while (src[count])
		count++;
	if (size == 0)
		return (count);
	i = 0;
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count);
}
