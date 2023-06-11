/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_monitor.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:38:39 by pefernan          #+#    #+#             */
/*   Updated: 2023/03/14 19:32:29 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h_headerrush01.h"

/*int check(int *row, int val): This function takes an array of integers row and an integer val as input.
It checks if the number of increasing sequences in the array row is equal to val, and if there are any duplicate values in the array.
It returns 1 if the conditions are met, otherwise it returns 0.*/

int	check(int *row, int val)
{
	int	stock;
	int	cur;
	int	num;

	cur = 1;
	stock = row[0];
	num = 1;
	while (num < 4)
	{
		if (row[num] > stock)
		{
			cur++;
			stock = row[num];
		}
		num++;
	}
	if (cur == val && el_in_tab(row) == 0)
		return (1);
	else
		return (0);
}

/*int check_reverse(int *row, int val): This function takes an array of integers row and an integer val as input. 
It reverses the order of the elements in the array row, and calls the check function with the reversed array and the integer val as input. 
It returns the result of the check function.*/

int	check_reverse(int *row, int val)
{
	int	ret;

	ft_rev_int_tab(row, 4);
	ret = check(row, val);
	ft_rev_int_tab(row, 4);
	return (ret);
}

/*int check_rows(int tab[4][4], int *val): This function takes a 2D array of integers tab and an array of integers val as input.
It calls the check and check_reverse functions with each row of the 2D array tab and the corresponding value from the array val as input. 
It returns 1 if all the conditions are met for all rows, otherwise it returns 0.*/

int	check_rows(int tab[4][4], int *val)
{
	if (check(tab[0], val[8]) == 0 || check_reverse(tab[0], val[12]) == 0)
		return (0);
	if (check(tab[1], val[9]) == 0 || check_reverse(tab[1], val[13]) == 0)
		return (0);
	if (check(tab[2], val[10]) == 0 || check_reverse(tab[2], val[14]) == 0)
		return (0);
	if (check(tab[3], val[11]) == 0 || check_reverse(tab[3], val[15]) == 0)
		return (0);
	return (1);
}

/*void get_cols(int col_tab[4], int tab[4][4], int col_num): This function takes an array of integers col_tab, a 2D array of integers tab, and an integer col_num as input. 
It copies the values from the specified column of the 2D array tab to the col_tab array.*/

/*int check_cols(int tab[4][4], int *val): This function takes a 2D array of integers tab and an array of integers val as input. 
It calls the check and check_reverse functions with each column of the 2D array tab and the corresponding value from the array val as input. 
It returns 1 if all the conditions are met for all columns, otherwise it returns 0.*/

int	check_cols(int tab[4][4], int *val)
{
	int	test_tab[4];

	get_cols(test_tab, tab, 0);
	if (check(test_tab, val[0]) == 0 || check_reverse(test_tab, val[4]) == 0)
		return (0);
	get_cols(test_tab, tab, 1);
	if (check(test_tab, val[1]) == 0 || check_reverse(test_tab, val[5]) == 0)
		return (0);
	get_cols(test_tab, tab, 2);
	if (check(test_tab, val[2]) == 0 || check_reverse(test_tab, val[6]) == 0)
		return (0);
	get_cols(test_tab, tab, 3);
	if (check(test_tab, val[3]) == 0 || check_reverse(test_tab, val[7]) == 0)
		return (0);
	return (1);
}

/*int ready_to_run(int tab[4][4], int *val): This function takes a 2D array of integers tab and an array of integers val as input. It calls the check_rows and check_cols functions with the input arrays. 
If both the functions return 1, it returns 1, indicating that the puzzle is ready to solve. Otherwise, it returns 0, indicating that the puzzle is not valid and cannot be solved.*/

int	ready_to_run(int tab[4][4], int *val)
{
	if (check_rows(tab, val) == 0 || check_cols(tab, val) == 0)
		return (0);
	return (1);
}
