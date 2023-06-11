/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:57:52 by plashkar          #+#    #+#             */
/*   Updated: 2023/03/20 14:36:50 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_sqrt(int nb)
{
	int	odd;
	int	sqrt;

	odd = 1;
	sqrt = 0;
	if (nb < 0)
		return (0);
	while (odd <= nb)
	{
		nb = nb - odd;
		odd += 2;
		sqrt++;
	}
	if (nb == 0)
		return (sqrt);
	else
		return (0);
}

/*int main(void)
{
	int nb;
    printf("Enter your number: ");
    scanf("%d", &nb);
	printf("The square root of your number is %d", ft_sqrt(nb));
}*/
