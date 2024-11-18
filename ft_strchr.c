/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciendacunha <luciendacunha@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 03:52:06 by lucien            #+#    #+#             */
/*   Updated: 2024/11/18 20:56:26 by luciendacun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strchr( const char * str, int c )
{
	size_t	i;

	i = 0;
	if(!str)
		return (NULL);
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i++;
	}
	
	if(str[i] == (char)c)
			return ((char *)(str + i));
	return (NULL);
	
}
// int	main(void)
// {
// 	char s1[] = "hello, world!";
// 	char s2[] = "hello, world!"; 
// 	// char * ptr1;
// 	// char * ptr2;
// 	int	c = 'o';
// 	// ptr1 = strchr(s1, c);
// 	// ptr2 = ft_strchr(s2, c);
// 	printf("%s \n",strchr(s1, c));
// 	printf("%s",ft_strchr(s2, c));
// 	return (0);
// }


