/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo-ma <pablo-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 13:15:04 by pablo-ma          #+#    #+#             */
/*   Updated: 2020/01/20 13:23:25 by pablo-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	int		mod;
	char	*str;

	i = n;
	j = 1;
	mod = n < 0;
	while (i /= 10)
		j++;
	if (!(str = malloc((j + 1 + mod) * sizeof(char))))
		return (NULL);
	if (mod)
		*str++ = '-';
	str += j;
	*str-- = '\0';
	if (n == 0)
		*str-- = '0';
	while (n)
	{
		*str-- = (n % 10) * (mod ? -1 : 1) + '0';
		n /= 10;
	}
	return (str + 1 - mod);
}
