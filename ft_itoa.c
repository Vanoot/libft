/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-oot <cvan-oot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:01:37 by cvan-oot          #+#    #+#             */
/*   Updated: 2022/11/18 16:53:29 by cvan-oot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countdigit(int i)
{
	int count;

	count = 0;
	if(i < 0)
	{
		i *= -1;
		count++;
	}
	while (i > 0)
	{
		i/= 10;
		count++;
	}
	return (count);
}

char *ft_itoa(int n)
{
	char	*str;
	int		i;
	long	nb;

	nb = n;
	i = countdigit(nb);
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	if (n == INT_MAX)
		return (ft_strdup("2147483647"));
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = 0;
	if (nb == 0)
	{
		free (str);
		str = calloc(2, sizeof(char));
		if (!str)
			return (NULL);
		str[0] = 48;
	}
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		str[i--] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (str);
}
