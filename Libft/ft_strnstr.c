/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo-ma <pablo-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 10:51:21 by pablo-ma          #+#    #+#             */
/*   Updated: 2020/01/20 10:51:42 by pablo-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t		i;
	size_t		j;
	char		*s;

	i = 0;
	s = (char *)str;
	if (to_find[0] == '\0')
		return (s);
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j] && (i + j) < len)
		{
			if (to_find[j + 1] == '\0')
				return (&s[i]);
			++j;
		}
		++i;
	}
	return (NULL);
}
