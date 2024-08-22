#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

int	ft_strcmp(const char *s1, const char *s2);
int	ft_strlen(const char *str);                  //ne peut etre modifier
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strdup(const char *source);

int	ft_isalpha(char c);
int ft_isdigit( int character );
int ft_isalnum( int character );

int ft_toupper( int character );
int	ft_tolower( int character );


void ft_putchar(char c);
void ft_putstr(char const *s);
void ft_putendl(char const *s);

int	ft_atoi(const char *nptr);


#endif