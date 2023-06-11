/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 23:12:24 by plashkar          #+#    #+#             */
/*   Updated: 2023/03/23 15:58:56 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_length(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

int	ft_src_length(int size, char **strs, char *sep)
{
	int	length_sep;
	int	index;
	int	n;
	int	l;

	l = 0;
	index = 0;
	n = 0;
	length_sep = ft_length(sep);
	while (n < size)
	{
		index = 0;
		while (strs[n][index] != '\0')
		{
			index++;
			l++;
		}
		n++;
	}
	return ((length_sep * (n - 1)) + l);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		n;
	int		i;
	int		k;
	int		j;
	char	*conc;

	k = 0;
	n = 0;
	conc = malloc(sizeof(char) * ft_src_length(size, strs, sep));
	while (n < size)
	{
		i = 0;
		while (strs[n][i] != '\0')
		{
			if (i == 0 && n != 0)
			{
				j = 0;
				while (sep[j] != '\0')
					conc[k++] = sep[j++];
			}
			conc[k++] = strs[n][i++];
		}
		n++;
	}
	return (conc);
}

int main()
{
	char	*words[] = {"I", "am", "clincally depressed now"};
	char	**src = words;
	char	*separator = ", ";
	printf("%s\n", ft_strjoin(50, src, separator));
	free (ft_strjoin);
}
