/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciendacunha <luciendacunha@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:37:39 by luda-cun          #+#    #+#             */
/*   Updated: 2024/11/18 20:56:10 by luciendacun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*find;

	i = 0;
	find = NULL;
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (str[i] == (unsigned char)c)
			find = ((char *)(str + i));
		i++;
	}
	if (str[i] == (unsigned char)c)
		find = (char *)(str + i);
	return (find);
}

// int	main(void)
// {
// 	char s1[] = "hello, world!";
// 	char s2[] = "hello, world!"; 
// 	// char * ptr1;
// 	// char * ptr2;
// 	int	c = 'P';
// 	// ptr1 = strchr(s1, c);
// 	// ptr2 = ft_strchr(s2, c);
// 	printf("%s \n",strrchr(s1, c));
// 	printf("%s",ft_strrchr(s2, c));
// 	return (0);
// }