/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darktemplar <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 11:24:58 by darktempl         #+#    #+#             */
/*   Updated: 2019/12/14 11:38:14 by darktempl        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int nb)
{
		long i;

		i = nb;
		if (i < 0)
		{
				ft_putchar('-');
				i = i * (-1);
		}
		if (i > 9)
		{
			ft_putnbr(i / 10);
			ft_putnbr(i % 10);
		}
		else
		{
			ft_putchar(i + '0');
		}
}
