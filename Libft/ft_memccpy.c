/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo-ma <pablo-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:07:57 by pablo-ma          #+#    #+#             */
/*   Updated: 2020/01/14 16:58:57 by pablo-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;
	char		*str1;
	const char	*str2;

	str1 = dest;
	str2 = src;
	i = 0;
	while (i < n)
	{
		str1[i] = str2[i];
		if (str1[i] == c)
			return (dest + i + 1);
		i++;
	}
	return (0);
}
