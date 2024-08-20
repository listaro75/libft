#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int	ft_strlen(const char *str);                  //ne peut etre modifier
char	*ft_strcpy(char *dest, const char *src);
int	ft_strcmp(const char *s1, const char *s2);
char	*ft_strcat(char *dest, const char *src);
int	ft_atoi(const char *nptr);
int	ft_isupper(char c);

#endif