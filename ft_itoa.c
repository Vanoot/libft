/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-oot <cvan-oot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:01:37 by cvan-oot          #+#    #+#             */
/*   Updated: 2022/11/16 12:48:03 by cvan-oot         ###   ########.fr       */
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
	int		nb;

	nb = n;
	i = countdigit(nb);
	str = malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	str[i--] = 0;
	if (nb == 0)
	{
		str = calloc(2, sizeof(char));
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
