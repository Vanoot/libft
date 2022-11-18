/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-oot <cvan-oot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:24:04 by cvan-oot          #+#    #+#             */
/*   Updated: 2022/11/18 17:17:31 by cvan-oot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp( const void * pointer1, const void * pointer2, unsigned int size)
{
	int	result;

	while (size)
	{
		result = *(unsigned char*)pointer1++ - *(unsigned char*)pointer2++;
		if (result)
			return (result);
		size--;
	}
	return (0);
}
