/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo-ma <pablo-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 10:52:08 by pablo-ma          #+#    #+#             */
/*   Updated: 2020/01/20 10:58:06 by pablo-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*aux_s1;
	unsigned char	*aux_s2;

	aux_s1 = (unsigned char *)s1;
	aux_s2 = (unsigned char *)s2;
	i = 0;
	while (aux_s1[i] && aux_s2[i] && aux_s1[i] == aux_s2[i] && i < n)
		i++;
	if (n == i)
	{
		return (0);
	}
	if (aux_s1[i] != aux_s2[i])
		return (aux_s1[i] - aux_s2[i]);
	else
		return (0);
}
