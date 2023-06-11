/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 19:22:37 by plashkar          #+#    #+#             */
/*   Updated: 2023/03/20 14:21:56 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (0);
	while (ft_is_prime (nb) != 1)
	{
		nb++;
	}
	return (nb);
}

/*int main(void)
{
    int nb; 
    printf("Enter your number: ");
    scanf("%d", &nb);
    printf("the next prime number is %d", ft_find_next_prime(nb));
}*/