/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-oot <cvan-oot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:40:54 by cvan-oot          #+#    #+#             */
/*   Updated: 2022/11/16 15:45:33 by cvan-oot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;
	
	i = ft_strlen(str);
	while(i >=0)
	{
		if (str[i] == c)
			return ((char)str + i);
		i--;
	}
	return (NULL);
}

// int main () 
// {
//    const char str[] = "http://www.tutorialspoint.com";
//    const char ch = '.';
//    char *ret;

//    ret = ft_strrchr(str, ch);

//    printf("String after |%c| is - |%s|\n", ch, ret);
   
//    return(0);
// }