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




// void *ft_memmove(void *dest, void *src, size_t size)
// {
// 	char 	*ptrdest;
// 	char 	*ptrsrc;
// 	size_t	i;
// 	size_t	n;


// 	ptrdest = *(char*)dest;
// 	ptrsrc = *(char*)src;

// 	i = 0;
// 	n = 0;
// 	if (size == 0)
// 		return (ptrdest);
// 	if(dest < src)
// 	{	
// 		while (size -- > 0)
// 		{

// 			ptrdest[i] = ptrsrc[i]; 
// 			i++;
// 			if(ptrsrc[i] == 0)
// 				return (ptrdest);
// 		}
// 	}
// 	if(src > dest)
// 	{

// 	}
// 	return (ptrdest);
	
// }

int	main(void)
{
	char s1[] = "hello, world!";
	char s2[] = "hello, world!";  
	printf("%s \n",memmove(s1,s1 + 3 , 13));
	// printf("%s",ft_memmove(s2 ,s2 + 3, 10));
	return (0);
}