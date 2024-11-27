/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-26 11:23:30 by luda-cun          #+#    #+#             */
/*   Updated: 2024-11-26 11:23:30 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_world(char const*s, char c)
{
	int	i;
	int	size;

	size = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			size++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (size);
}
char	*skipchar(char const*s, char c)
{
	while (*s == c && *s != '\0')
	{
		s++;
	}
	return ((char *)s);
}
char	*ft_copy_word(char const *s, char c)
{
	int		i;
	int		j;
	char	*copy;

	i = 0;
	j = 0;
	while(s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	copy = (char * )malloc(sizeof(char) * (i + 1));
	if(!copy)
		return(NULL);
	while (j < i)
	{
		copy[j] =s[j];
		j++; 
	}
	copy[j] = 0;
	return (copy);
}
int		skipword(char const *s, char c)
{
	int i;
	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	return (i);
	
}
char	**ft_split(char const *s, char c)
{
	char	**array;
	int		count;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	s = skipchar(s, c);
	count = ft_count_world(s, c);
	array = (char **)malloc(sizeof(char *) * (count + 1));
	if (!array)
		return (NULL);
	while (i < count)
	{
		array[i] = ft_copy_word(s, c);
		if(!array[i])
			return(NULL);
		s = skipchar(s + skipword(s,c), c);
		i++;
	}
	array[i] = NULL;
	return (array);
}

// int main(void)
// {
// 	char str[]="cbonjourcccheychello";
// 	char	**strr;
// 	char	c;
// 	int	i = 0;

// 	c = 'c';
// 	strr=ft_split(str, c);
// 	while (strr[i])
// 	{
// 		printf("%s\n", strr[i]);
// 		i++;
// 	}



// }