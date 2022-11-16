/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-oot <cvan-oot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:39:00 by cvan-oot          #+#    #+#             */
/*   Updated: 2022/11/16 11:44:27 by cvan-oot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	getstart(char const *s1, char const *set)
{
	int	i;
	int size;

	i = 0;
	size = ft_strlen(s1);
	while (i < size)
	{
		if (ft_strchr(set, s1[i]) == 0)
			break;
		i++;
	}
	return (i);
}

int	getend(char const *s1, char const *set)
{
	int i;
	int size;

	size = ft_strlen(s1);
	while (i < size)
	{
		if (ft_strchr(set, s1[size - i - 1]) == 0)
			break;
		i++;
	}
	return (size - i);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	newstr;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	start = getstart(s1, set);
	end = getend(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	newstr = (char *)malloc(sizeof(char) * end - start + 1);
	if (!newstr)
		return (NULL);
	ft_strlcpy(newstr, s1 + start, end - start +1);
	return (newstr);
}