/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciendacunha <luciendacunha@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:34:23 by luda-cun          #+#    #+#             */
/*   Updated: 2024/11/18 20:56:14 by luciendacun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i] )&& size - 1 > i)
	{
		if (s1[i] != s2[i])
			return(s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
	
}

// int	main(void)
// {
// 	char s1[] = "hello, world!";
// 	char s2[] = "hello, world!"; 

// 	printf("%d \n",strncmp(s1, s2, 100));
// 	printf("%d",ft_strncmp(s1, s2, 100));
// 	return (0);
// }