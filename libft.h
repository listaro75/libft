/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciendacunha <luciendacunha@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:42:55 by luda-cun          #+#    #+#             */
/*   Updated: 2024/11/19 00:02:35 by luciendacun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t n);
int		ft_atoi(const char *nptr);
int		ft_isalnum(int c);
int		ft_isalpha(char c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memchr(const char *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, void const *src, size_t n);
void	*ft_memmove(void *dest, void *src, size_t size);
void	*ft_memset(void *s, int c, size_t n);
char	* ft_strchr(const char * str, int c);
int		ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int		ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t size);
char	*ft_strrchr(const char* str, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);

#endif	