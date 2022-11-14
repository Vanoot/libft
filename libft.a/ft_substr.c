/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-oot <cvan-oot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:13:41 by cvan-oot          #+#    #+#             */
/*   Updated: 2022/11/08 16:46:31 by cvan-oot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *rest;
	int i;
	int y;

	i = 0;
	y = 0;
	rest = malloc(sizeof(char) * len);
	if (!rest)
		return (NULL);
	while (rest[i] != start)
		i++;
	if (!rest)
		return (NULL);
	while (y <= len)
	{
		rest[]
	}
	
}