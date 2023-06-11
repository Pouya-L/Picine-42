/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 12:37:20 by plashkar          #+#    #+#             */
/*   Updated: 2023/03/19 20:46:14 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_iterative_factorial(int nb)
{
	int	factor;

	factor = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		factor = factor * nb;
		nb--;
	}
	return (factor);
}

/*int main(void)
{
    printf("the factorial of 5 is %d", ft_iterative_factorial(5));
    printf("%s", "\n");
    printf("the factorial of -6 is %d", ft_iterative_factorial(-6));
    printf("%s", "\n");
    printf("the factorial of 0 is %d", ft_iterative_factorial(0));
    printf("%s", "\n");
}*/
