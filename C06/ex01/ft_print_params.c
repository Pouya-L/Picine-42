/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:27:41 by plashkar          #+#    #+#             */
/*   Updated: 2023/03/16 23:12:20 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	c;

	j = 1;
	while (j <= argc - 1)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			c = argv[j][i];
			write (1, &c, 1);
			i++;
		}
		write (1, "\n", 1);
		j++;
	}
}
/*we write argc -1 (size -1) to prevent segmentation error*/
