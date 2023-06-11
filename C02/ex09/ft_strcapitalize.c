/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 17:29:20 by plashkar          #+#    #+#             */
/*   Updated: 2023/03/12 20:01:49 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	mcbig(char *a)
{
	if (*a >= 'a' && *a <= 'z')
		*a -= 32;
	return (*a);
}

char	mcsmall(char *b)
{
	if (*b >= 'A' && *b <= 'Z')
		*b += 32;
	return (*b);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
			mcbig (&str[i]);
		else if (str[i - 1] >= '0' && str[i - 1] <= '9')
			mcsmall (&str[i]);
		else if (str[i - 1] >= 'a' && str[i -1] <= 'z')
			mcsmall (&str[i]);
		else if (str[i - 1] >= 'A' && str[i -1] <= 'Z')
			mcsmall (&str[i]);
		else
			mcbig (&str[i]);
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char str[26] = "idk, Com, why+god 13killme";
	ft_strcapitalize(str);
	printf("%s\n", str);
}*/
