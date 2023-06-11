/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 19:36:20 by plashkar          #+#    #+#             */
/*   Updated: 2023/03/19 20:57:34 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*int main(void)
{
    printf("%d", ft_fibonacci(4));
    printf("%s", "\n");
    printf("%d", ft_fibonacci(0));
    printf("%s", "\n");
    printf("%d", ft_fibonacci(-5));
    printf("%s", "\n");
    printf("%d", ft_fibonacci(3));
}*/
