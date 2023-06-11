/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:39:49 by pefernan          #+#    #+#             */
/*   Updated: 2023/03/14 19:32:29 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h_headerrush01.h"

void	ft_putchar(char *chr)
{
	write(1, chr, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

/*Prints a 4x4 matrix of integers (representing the solution to the game) to the standard output stream. 
The matrix is passed as a parameter, and each integer is converted to a character and printed one-by-one using ft_putchar. 
The function also inserts spaces between the integers on the same row and a newline character after each row is printed.*/

void	print_solution(int tab[4][4])
{
	int		cur;
	int		cur2;
	char	c;

	cur = 0;
	while (cur < 4)
	{
		cur2 = 0;
		while (cur2 < 4)
		{
			c = tab[cur][cur2] + '0';
			ft_putchar(&c);
			if (cur2 != 3)
				ft_putchar(" ");
			cur2++;
		}
		ft_putchar("\n");
		cur++;
	}
}
