/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrays.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:39:00 by pefernan          #+#    #+#             */
/*   Updated: 2023/03/14 19:32:29 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h_headerrush01.h"

/*the lines_to_array function maps a unique permutation of numbers to a 4x4 grid, 
where each row of the grid corresponds to a unique permutation of the numbers.*/


/*The function takes a pointer to an integer array row, which represents a single row of the checktab array. 
It then iterates over each element in the row using two nested loops, comparing the value at each position to all other values in the row.
If it finds a pair of values that are the same (and are not at the same position), it returns 1, indicating that there is a repeated value in the row. 
If no repeated values are found, the function returns 0.*/

int	el_in_tab(int *row) /*basically the el_in_tab function is used to check the validity of a row in the 4x4 grid, ensuring that no number is repeated in the same row.*/
{
	int	cur;
	int	cur2;

	cur = 0;
	while (cur < 4)
	{
		cur2 = 0;
		while (cur2 < 4)
		{
			if (row[cur] == row[cur2] && cur != cur2)
				return (1);
			cur2++;
		}
		cur++;
	}
	return (0);
}


/*In the given function, checktab is a 2D array of size 4x4 that is used to represent a square matrix. It is used to store the lines/rows of the square matrix which is being evaluated to check if it is a valid solution to the problem.

The checktab array is filled with values from the permut array based on the indices in the linesnum array. 
Specifically, each row in checktab represents a line of the square matrix, and each element of a row represents a value in that line. 
The function iterates through each row of checktab and fills it with the corresponding values from the permut array based on the corresponding index in linesnum.*/
void	lines_to_array(int checktab[4][4], int permut[24][4], int linesnum[4])
{
	int	cur;
	int	cur2;

	cur = 0; /*it iterates through each row|line*/
	cur2 = 0; /*it iterates through each column*/
	while (cur < 4)
	{
		cur2 = 0;
		while (cur2 < 4)
		{
			checktab[cur][cur2] = permut[linesnum[cur]][cur2];
			cur2++;
		}
		cur++;
	}
}

/*This function takes in a 2D array tab of size 4x4, and an integer col_num representing the column number. 
It then extracts the elements from the col_numth column of the tab array and stores them in a 1D array col_tab.
So essentially, this function retrieves all the values from a specific column of a 2D array and stores them in a 1D array.*/
void	get_cols(int col_tab[4], int tab[4][4], int col_num)
{
	col_tab[0] = tab[0][col_num];
	col_tab[1] = tab[1][col_num];
	col_tab[2] = tab[2][col_num];
	col_tab[3] = tab[3][col_num];
}
