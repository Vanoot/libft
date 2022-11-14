/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-oot <cvan-oot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:20:09 by cvan-oot          #+#    #+#             */
/*   Updated: 2022/11/14 15:58:03 by cvan-oot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *	ft_memchr(const void * memoryBlock, int searchedChar, unsigned int size)
{
	int	i;
	char * tmp;

	i = 0;
	tmp = memoryBlock;
	while (i < size)
	{
		if (tmp[i] == searchedChar)
			return (tmp[i]);
		i++;
	}
	return (NULL);
}