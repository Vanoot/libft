/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-oot <cvan-oot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:30:03 by cvan-oot          #+#    #+#             */
/*   Updated: 2022/11/14 15:58:04 by cvan-oot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int	ft_atoi(char *str);
void	ft_bzero(void *s, unsigned int n);
void *	ft_calloc(unsigned int elementcount, unsigned int elementsize);
int	ft_isalnum(int str);
int	ft_isalpha(int str);
int	ft_isascii(int str);
int	ft_isdigit(int str);
int	ft_isprint(int str);
void *	ft_memchr(const void * memoryBlock, int searchedChar, unsigned int size);
int ft_memcmp( const void * pointer1, const void * pointer2, unsigned int size);
void	*ft_memcpy(void	*dest, const void	*src, unsigned int n);
void	*ft_memmove(void *dest, const void *src, unsigned int n);
void	*ft_memset(void *dest, int value, unsigned int count);
void	ft_putchar(char c);
void	ft_putstr( char *str );
char	**ft_split(char *str, char *charset);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(char *src);
unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int	ft_strlen(char *str);
int ft_strncmp( const char * first, const char * second, unsigned int length );
char	*ft_strnstr(const char *big, const char *little, unsigned int len);
char	*ft_strchr(const char *str, int c);
char *ft_substr(char const *s, unsigned int start, size_t len);
void	ft_swap(int *a, int *b);
int	ft_tolower(int ch);
int	ft_toupper(int ch);
char *ft_strjoin(char const *s1, char const *s2);
#endif