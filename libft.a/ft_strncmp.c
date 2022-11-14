/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-oot <cvan-oot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:47:19 by cvan-oot          #+#    #+#             */
/*   Updated: 2022/11/08 16:46:08 by cvan-oot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp( const char * first, const char * second, unsigned int length )
{
	while (length && *first && *first == *second)
{
		++first;
		++second;
		--length;
}
	return ((int)(unsigned char)*first - (int)(unsigned char)*second);
}
// int main() {

// 	printf( "\"toto\" starts with \"toto\" == %d\n", ft_strncmp( "toto", "toto", 5 ) );
// 	printf( "\"toto\" starts with \"james\" == %d\n", ft_strncmp( "toto", "james", 5 ) );
// 	printf( "\"james bond\" starts with \"james\" == %d\n", ft_strncmp( "james bond", "james", 5 ) );
// 	printf( "\"toto\" starts with \"to\" == %d\n", strncmp( "toto", "toto", 5 ) );
// 	printf( "\"toto\" starts with \"james\" == %d\n", strncmp( "toto", "james", 5 ) );
// 	printf( "\"james bond\" starts with \"james\" == %d\n", strncmp( "james bond", "james", 5 ) );

//     return 0;
// }