/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 10:32:02 by plashkar          #+#    #+#             */
/*   Updated: 2023/03/17 11:24:40 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	{
		while (str[i] != '\0')
		{
			write (1, &str[i], 1);
			i++;
		}
	}
}

int main(void)
{
	char *str;
	str = "hello";
	ft_putstr(str);
	return(0);
}

