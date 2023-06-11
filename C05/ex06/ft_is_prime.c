/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 18:48:38 by plashkar          #+#    #+#             */
/*   Updated: 2023/03/20 14:21:58 by plashkar         ###   ########.fr       */
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

/*int main(void)
{
    int nb; 
    printf("Enter your number\n");
    scanf("%d", &nb);
    if (ft_is_prime(nb) == 1)
    printf("Your number is a prime number\n");
    else
    printf("Your number is not a prime number\n");
    return (0);
}*/