/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo-ma <pablo-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 21:24:08 by pablo-ma          #+#    #+#             */
/*   Updated: 2020/01/23 10:04:56 by pablo-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	numb_words(char const *s, char c, size_t len)
{
	size_t		i;
	size_t		wcount;

	if (len == 0)
		return (0);
	i = 0;
	wcount = 1;
	while (i < len)
		if (s[i] == c)
		{
			wcount++;
			while (s[i] == c)
				i++;
		}
		else
			i++;
	return (wcount);
}

static char		**getwords(char const *s, char c, size_t len, size_t nwords)
{
	size_t		start;
	size_t		end;
	char		**res;
	char		**result;

	start = 0;
	end = 0;
	if (!(result = ((char**)malloc(sizeof(char *) * (nwords + 1)))))
		return (NULL);
	res = result;
	while (end < len)
		if (s[end] == c || end + 1 == len)
		{
			end = (end + 1 == len ? len : end);
			if (!(*result = ft_substr(s, start, (end - start))))
				return (NULL);
			result++;
			while (s[end] == c)
				end++;
			start = end;
		}
		else
			end++;
	*result = NULL;
	return (res);
}

char			**ft_split(char const *s, char c)
{
	size_t		nwords;
	size_t		len;
	char		**gwords;

	s = ft_strtrim(s, &c);
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	nwords = numb_words(s, c, len);
	gwords = getwords(s, c, len, nwords);
	return (gwords);
}
