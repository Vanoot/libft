/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-oot <cvan-oot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 13:19:59 by cvan-oot          #+#    #+#             */
/*   Updated: 2022/11/16 15:43:09 by cvan-oot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	d;

	if ((int)size <= ft_strlen(dst))
		return (size + ft_strlen((char*)src));
	c = ft_strlen(dst);
	d = 0;
	while (src[d] && c + 1 < size)
	{
		dst[c] = src[d];
		c++;
		d++;
	}
	dst[c] = '\0';
	return (c + d);
}

/*int main(void)
{
	char dest[] = "test";
	const char src [] = "olaa";

	printf("%u", ft_strlcat(dest, src, 1));
}
*/
