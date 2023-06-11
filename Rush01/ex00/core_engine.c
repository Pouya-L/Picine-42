/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_engine.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:38:22 by pefernan          #+#    #+#             */
/*   Updated: 2023/03/14 19:32:29 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h_headerrush01.h"

void	loop(int lines[4], int checktab[4][4], int permut[24][4], int val[16])
{
	while (lines[0]++, lines[0] < 24) /*this loop is trying to solve the puzzle by bruteforcing all the possible permutations of the 4*4 grid*/
	{
		lines[1] = 0;
		while (lines[1]++, lines[1] < 24) /*but it's doint that line by line*/
		{
			lines[2] = 0;
			while (lines[2]++, lines[2] < 24)
			{
				lines[3] = 0;
				while (lines[3]++, lines[3] < 24)
				{
					lines_to_array(checktab, permut, lines); /*this converts the current permutatuions into a grid of numbers represented by checktab*/
					if (ready_to_run(checktab, val) == 1) /*this checks if the current grid mathces the initial state of 'val[16]; */
					{
						print_solution(checktab); /*if ready to run passes the final check and everything matches the initial state of 'val[16] it prints*/
						return ; /* so if everything is ok, it finishes the loop, if not it continues the loop*/
					}
				}
			}
		}
	}
	ft_putstr("Error\n"); /*if thesolution is not found, it will print error*/
}

void	resolve(int val[16]) /*this is the entery point*/
{
	int	permut[24][4]; /*permut is 2D array that contains all the possible permutations of num 1-4*/
	/*the reasson it say 24 in the first bracket is that there are 24 possible ways we can sort 4 numbers 4!=24*/
	int	checktab[4][4]; /*checktab is an array that represents the 4x4 grid that needs to be filled with numbers. Each element of checktab represents a position in the grid and holds a value that is either a number between 1 and 4, indicating a given value at that position,
	 or a 0, indicating that the value at that position is not yet known.*/
	int	linesnum[4]; /*This is an array of length 4 that contains the indices of 4 rows of the permut array. These 4 rows represent a unique permutation of the numbers 1 to 4.*/
	int	i_cur;
	/*The first dimension of the checktab array (4) represents the number of rows in the grid, and the second dimension (4) represents the number of columns in the grid.*/

	i_cur = -1;q
	while (i_cur++, i_cur < 4)
		linesnum[i_cur] = -1; /*this means the array 'linesnum' has four elements all initilizd to -1*/
	get_permut(permut);
	loop(linesnum, checktab, permut, val);
}

int	process_char(int cur, char **argv, int val[16])
{
	if (cur > 31)
	{
		return (1);
	}
	if (cur % 2 == 0)
	{
		if (argv[1][cur] >= 48 && argv[1][cur] <= 57) /*this check if the character is a digit*/
			val[cur / 2] = argv[1][cur] - 48; /*this turns the character to an int by doing - '0'*/
		else
		{
			return (1);
		}
	}
	else
	{
		if (argv[1][cur] != ' ')
		{
			return (1);
		}
	}
	return (0);
}
