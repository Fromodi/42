/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 21:02:56 by apavel            #+#    #+#             */
/*   Updated: 2019/12/01 19:32:12 by pablo-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] == '\0')
		return (s1[i] - s2[i]);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int cmp_len;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			cmp_len = ft_strncmp(&str[i], to_find, ft_strlen(to_find));
			if (cmp_len == 0)
				return (str + i);
		}
		i++;
	}
	return (0);
}
