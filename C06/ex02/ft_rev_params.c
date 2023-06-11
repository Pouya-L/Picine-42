/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 19:15:08 by plashkar          #+#    #+#             */
/*   Updated: 2023/03/21 14:07:42 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	c;

	j = argc -1;
	while (j < argc && j > 0)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			c = argv[j][i];
			write (1, &c, 1);
			i++;
		}
		write (1, &"\n", 1);
		j--;
	}
}
