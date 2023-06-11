/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:41:02 by pefernan          #+#    #+#             */
/*   Updated: 2023/03/12 20:41:03 by pefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h_headerrush01.h"

int	main(int argc, char **argv)
{
	int	matrix[16];

	if (!check_argcomponent(argc))
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (check_argvector(argv, matrix))
	{
		ft_putstr("Error\n");
		return (0);
	}
	resolve(matrix);
}
