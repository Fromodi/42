/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo-ma <pablo-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 17:00:52 by pablo-ma          #+#    #+#             */
/*   Updated: 2020/01/16 21:20:48 by pablo-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*str1;
	char const	*str2;

	str1 = dest;
	str2 = src;
	if (!n || dest == src)
		return (dest);
	while (n--)
		*str1++ = *str2++;
	return (dest);
}
