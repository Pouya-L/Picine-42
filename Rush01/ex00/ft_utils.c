/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:40:05 by pefernan          #+#    #+#             */
/*   Updated: 2023/03/14 19:32:29 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	cur;
	int	t;

	cur = 0;
	while (cur < size / 2)
	{
		t = tab[cur];
		tab[cur] = tab[size - 1 - cur];
		tab[size - 1 - cur] = t;
		cur++;
	}
}

/*The function copy_array takes two 2D arrays of integers, told and tnew, both of size 24x4. 
It copies the values from the told array into the tnew array element by element, such that tnew[i][j] is assigned the same value as told[i][j] for all i from 0 to 23 and j from 0 to 3. 
In other words, it creates a duplicate copy of the told array in tnew.*/

void	copy_array(int told[24][4], int tnew[24][4])
{
	int	cur1;
	int	cur2;

	cur1 = 0;
	while (cur1 < 24)
	{
		cur2 = 0;
		while (cur2 < 4)
		{
			tnew[cur1][cur2] = told[cur1][cur2];
			cur2++;
		}
		cur1++;
	}
}
