/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-oot <cvan-oot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:13:41 by cvan-oot          #+#    #+#             */
/*   Updated: 2022/11/18 16:22:11 by cvan-oot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *rest;
	int i;

	i = 0;
	rest = (char*)malloc(sizeof(char) * (len +1));
	if (!rest)
		return (NULL);
	else if (ft_strlen(s) < start)
		return ("");
	else if (start == 0)
		return ((char*)s);
	while (start < ft_strlen(s))
		rest[i++] = s[start++];
	return (rest);
}