/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-oot <cvan-oot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:24:04 by cvan-oot          #+#    #+#             */
/*   Updated: 2022/11/08 16:45:59 by cvan-oot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int memcmp( const void * pointer1, const void * pointer2, unsigned int size)
{
	char	* first;
	char	* second;
	int i;

	i = 0;
	first = pointer1;
	second = pointer2;
	while (i < size)
	{
		if (first[i] != second[i])
			return (first[i] - second[i]);
		i++;
	}
	return (0);
}