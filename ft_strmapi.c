/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-oot <cvan-oot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:48:19 by cvan-oot          #+#    #+#             */
/*   Updated: 2022/11/16 15:12:37 by cvan-oot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*newstr;

	i = 0;
	newstr = ft_strdup((char*)s);
	if (!newstr)
		return (NULL);
	while (newstr[i])
	{
		(*f)(i, newstr[i]);
		i++;
	}
	return (newstr);
}
