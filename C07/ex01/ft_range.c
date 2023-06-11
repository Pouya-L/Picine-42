/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:32:27 by plashkar          #+#    #+#             */
/*   Updated: 2023/03/22 23:30:10 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	range = (int *) malloc (sizeof(int) * (max - min));
	if (range == NULL)
		return (NULL);
	range[i] = min;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

/*int main() {
    int *result;

    // Test case 1
    printf("Test case 1: ft_range(0, 0)\n");
    result = ft_range(0, 0);
    if (result == NULL) {
        printf("ft_range returned NULL\n");
    } else {
        printf("Result: []\n");
        free(result);
    }*/
