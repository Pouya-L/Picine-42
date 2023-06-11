/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 17:58:34 by plashkar          #+#    #+#             */
/*   Updated: 2023/03/20 14:34:27 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb == 0 && power == 0)
		return (1);
	else
		result = nb * ft_recursive_power (nb, power - 1);
	return (result);
}

/*int main(void)
{
    printf("%d", ft_recursive_power(2, 5));
        printf("%s", "\n");
    printf("%d", ft_recursive_power(0, 0));
        printf("%s", "\n");
    printf("%d", ft_recursive_power(-0, 2));
        printf("%s", "\n");
    printf("%d", ft_recursive_power(-0, 5));
        printf("%s", "\n");
    printf("%d", ft_recursive_power(-2, 5));
        printf("%s", "\n");
    printf("%d", ft_recursive_power(2, 0));
}*/
