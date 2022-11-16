/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-oot <cvan-oot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:24:04 by cvan-oot          #+#    #+#             */
/*   Updated: 2022/11/16 14:36:36 by cvan-oot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp( const void * pointer1, const void * pointer2, unsigned int size)
{
	int	result;

	while (size)
	{
		result = *(char*)pointer1++ - *(char*)pointer2++;
		if (result !=0)
			return (result);
		size--;
	}
	return (0);
}