/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:01:53 by plashkar          #+#    #+#             */
/*   Updated: 2023/03/19 20:53:03 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

/*int main(void)
{
    printf("the result is %d", ft_iterative_power(2, 4));
        printf("%s", "\n");
    printf("the result is %d", ft_iterative_power(0, 4));
        printf("%s", "\n");
    printf("the result is %d", ft_iterative_power(0, 0));
        printf("%s", "\n");
    printf("the result is %d", ft_iterative_power(2, 0));
        printf("%s", "\n");
    printf("the result is %d", ft_iterative_power(-2, 3));
        printf("%s", "\n");
    printf("the result is %d", ft_iterative_power(2, -3));
        printf("%s", "\n");
}*/
