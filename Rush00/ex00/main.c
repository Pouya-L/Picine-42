/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 13:59:11 by plashkar          #+#    #+#             */
/*   Updated: 2023/03/04 21:05:05 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.c"
#include <stdio.h>

void rush02(int a, int b); 

int	main()
{
	int a;
	int b;

	printf("What should the length be?\n");
	scanf("%d", &a);

	printf("What should the height be?\n");
	scanf("%d", &b);

	rush02(a, b);
}
