/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-14 14:12:31 by luda-cun          #+#    #+#             */
/*   Updated: 2024-11-14 14:12:31 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t size)
{
	size_t	i;

	i = 0;
	if (dest < src)
	{	
		while (i < size)
		{
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
			i++;
		}
		return (dest);
	}
	else
	{
		i = size - 1;
		while (i >= 0)
		{
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
			i--;
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char s1[] = "hello, world!";
// 	char s2[] = "hello, world!";  
// 	printf("%s \n",memmove(s1,s1 + 3 , 10));
// 	printf("%s",ft_memmove(s2 ,s2 + 3, 10));
// 	return (0);
// }