/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 12:45:50 by plashkar          #+#    #+#             */
/*   Updated: 2023/03/19 20:50:37 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_recursive_factorial(int nb)
{
	int	factor;

	factor = 1;
	if (nb < 0)
		return (0);
	if (nb > 1)
		factor = nb * ft_recursive_factorial(nb - 1);
	return (factor);
}

/*int main(void)
{
    printf("the factorial of 5 is %d", ft_recursive_factorial(5));
    printf("%s", "\n");
    printf("the factorial of 7 is %d", ft_recursive_factorial(7));
    printf("%s", "\n");
    printf("the factorial of 0 is %d", ft_recursive_factorial(0));
    printf("%s", "\n");
    printf("the factorial of -5 is %d", ft_recursive_factorial(-5));

}*/
