/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-18 13:54:09 by luda-cun          #+#    #+#             */
/*   Updated: 2024-11-18 13:54:09 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
// int	main(void)
// {
// 	char s1[] = "hello, world!";
// 	char s2[] = "hello, world!"; 
// 	char * ptr1;
// 	char * ptr2;
// 	int	c = 'e';
// 	printf("%s \n",memchr(s1, c, 5));
// 	printf("%s \n",ft_memchr(s2, c, 5));
// 	return (0);
// }