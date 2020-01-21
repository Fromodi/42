/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo-ma <pablo-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 18:28:10 by pablo-ma          #+#    #+#             */
/*   Updated: 2020/01/21 21:22:42 by pablo-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*str1;
	unsigned char		*str2;

	str1 = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	i = 0;
	if (!str1 && !str2)
		return (NULL);
	if (str2 < str1)
		while (++i <= len)
			str1[len - i] = str2[len - i];
	else
		while (len-- > i)
			*(str1++) = *(str2++);
	return (dest);
}
