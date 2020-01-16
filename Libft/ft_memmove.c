/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo-ma <pablo-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 18:28:10 by pablo-ma          #+#    #+#             */
/*   Updated: 2020/01/14 13:27:14 by pablo-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t		i;
	char		*str1;
	char const	*str2;

	str1 = dest;
	str2 = src;
	i = 0;
	if (str2 < str1)
		while (i <= len)
		{
			i++;
			str1[len - i] = str2[len - i];
		}
	else
		while (len > i)
		{
			len--;
			*(str1++) = *(str2++);
		}
	return (dest);
}
