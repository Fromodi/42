/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmourell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 15:18:12 by jmourell          #+#    #+#             */
/*   Updated: 2019/11/17 17:49:01 by pablo-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar();
void	sides (int x, int y, int tx, int ty);
void	bottom (int x, int y, int tx, int ty);
void	top(int x, int y, int tx, int ty);

void	rush(int x, int y)
{
	int tx;
	int ty;

	tx = 0;
	ty = 0;
	if (x < 1 || y < 1)
	{
		write(1, "Syntax error: forbidden number", 31);
		return ;
	}
	else if (x == 1 && y > 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
		ty++;
		while (ty < y - 1)
		{
			ft_putchar('B');
			ft_putchar('\n');
			ty++;
		}
		ft_putchar('C');
	}
		else top(x, y, tx, ty);
}

void	top(int x, int y, int tx, int ty)
{
	while (tx < x && ty == 0)
	{
		if (ty == 0 || ty == y - 1)
		{
			if (tx == 0)
			{
				ft_putchar('A');
				tx++;
			}
			else if (tx < x - 1)
			{
				ft_putchar('B');
				tx++;
			}
			else
			{
				ft_putchar('C');
				ft_putchar('\n');
				ty++;
				tx = 0;
				sides(x, y, tx, ty);
			}
		}
	}
}

void	sides(int x, int y, int tx, int ty)
{
	while (ty > 0 && ty < y - 1 && tx < x)
	{
		if (tx == 0)
		{
			ft_putchar('B');
			tx++;
		}
		else if (ty < y && tx > 0 && tx < x - 1)
		{
			ft_putchar(' ');
			tx++;
		}
		else if (ty < y && tx == x - 1)
		{
			ft_putchar('B');
			ft_putchar('\n');
			tx = 0;
			ty++;
			bottom(x, y, tx, ty);
		}
	}
}

void	bottom(int x, int y, int tx, int ty)
{
	while (tx < x && ty == y - 1)
	{
		if (tx == 0)
		{
			ft_putchar('C');
			tx++;
		}
		else if (tx < x - 1)
		{
			ft_putchar('B');
			tx++;
		}
		else
		{
			ft_putchar('A');
			ft_putchar('\n');
			ty++;
			tx = 0;
		}
	}
}
