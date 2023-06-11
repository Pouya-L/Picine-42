/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:00:59 by plashkar          #+#    #+#             */
/*   Updated: 2023/03/04 18:17:28 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void ft_putchar(char c);

void drawline(int length, char first, char mid, char end)
{
	int cnt0;
	cnt0 = 0;
	while (cnt0 < length)
	{
		if (cnt0 == 0)
		{
			ft_putchar(first);
		}
		else
		{
			if (cnt0 == length - 1) 
				ft_putchar(end);
			else
				ft_putchar(mid);
		}
		cnt0++;
	}
	ft_putchar('\n');
}

void	rush02(int col, int row)
{
	int cnt1;
	if (col <= 0 || row <= 0)
	{
		return;
	}
	cnt1= 0;
	while (cnt1 < row)
	{
		if (cnt1 == 0)
		{
			drawline(col, 'A', 'B', 'A');
		}
		else
		{
			if (cnt1 == row- 1)
				drawline(col, 'C', 'B', 'C');
			else
				drawline(col, 'B', ' ', 'B');
		}
		cnt1++;
	}
}
