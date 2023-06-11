/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_bruteforce.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:37:02 by pefernan          #+#    #+#             */
/*   Updated: 2023/03/14 19:32:29 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h_headerrush01.h"

int		g_permut[24][4];
int		g_cur;

/*add_permut(const int *v): This function takes an array of four integers v and 
adds it to a global two-dimensional array g_permut at index g_cur, 
which is incremented after each addition.*/
void	add_permut(const int *v)
{
	g_permut[g_cur][0] = v[0];
	g_permut[g_cur][1] = v[1];
	g_permut[g_cur][2] = v[2];
	g_permut[g_cur][3] = v[3];
	g_cur = g_cur + 1;
}
/*This function recursively generates all permutations of a given array of n integers c,
 using the Heap's Algorithm. It calls add_permut for each permutation generated.*/

void	heappermute(int c[], int n)
{
	int	i;

	if (n == 1)
		add_permut(c);
	else
	{
		i = 0;
		while (i < n)
		{
			heappermute(c, n - 1);
			if (n % 2 == 1)
				ft_swap(&c[0], &c[n - 1]);
			else
				ft_swap(&c[i], &c[n - 1]);
			i++;
		}
	}
}
/*get_permut(int permut[24][4]): This function initializes an array el with the integers 1, 2, 3, and 4, sets the global variable g_cur to 0, 
calls heappermute with el and 4, and then copies the resulting permutations from g_permut to the array permut.*/

void	get_permut(int permut[24][4])
{
	int	el[4];

	el[0] = 1;
	el[1] = 2;
	el[2] = 3;
	el[3] = 4;
	g_cur = 0;
	heappermute(el, 4);
	copy_array(g_permut, permut);
}

/*The resulting permut array will contain all possible permutations of the integers 1, 2, 3, and 4 in a lexicographic order.*/