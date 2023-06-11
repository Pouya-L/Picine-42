/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compliances.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:39:34 by pefernan          #+#    #+#             */
/*   Updated: 2023/03/14 19:32:29 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h_headerrush01.h"

int	check_argcomponent(int argc)
{
	if (argc != 2)
	{
		return (0);
	}
	return (1);
}

/*The function "check_argvector" takes a double pointer to the command line arguments (argv) and an integer array (matrix) as input. 
It iterates over the characters of the second argument (argv[1]) and calls the function "process_char" on each character, passing the current index, argv, and matrix as arguments. 
If "process_char" returns 1 for any of the characters, "check_argvector" returns 1. 
Otherwise, it returns 0. The purpose of this function is to check if the second argument is valid and if it can be used to construct a 4x4 matrix.*/

int	check_argvector(char **argv, int *matrix)
{
	int	cur;

	cur = -1;
	while (cur++, argv[1][cur] != 0)
	{
		if (process_char(cur, argv, matrix) == 1)
			return (1);
	}
	return (0);
}
