/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo-ma <pablo-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 13:06:13 by pablo-ma          #+#    #+#             */
/*   Updated: 2020/01/20 13:07:19 by pablo-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	count;
	char			*str;

	i = 0;
	count = 0;
	if (s == NULL)
		return (NULL);
	while (s[count])
		count++;
	if ((str = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	if (start < count)
	{
		while (i < len && s[start + i])
		{
			str[i] = s[start + i];
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}
