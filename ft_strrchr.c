/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-18 12:37:39 by luda-cun          #+#    #+#             */
/*   Updated: 2024-11-18 12:37:39 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char* str, int c)
{
    int i;

    i = ft_strlen(str);
    if(!str)
        return(NULL);
	while (i >= 0)
	{
		if (str[i] == c)
			return((char*)(str + i));
		i--;
	}
	return(NULL);
}

int	main(void)
{
	char s1[] = "hello, world!";
	char s2[] = "hello, world!"; 
	// char * ptr1;
	// char * ptr2;
	int	c = 'P';
	// ptr1 = strchr(s1, c);
	// ptr2 = ft_strchr(s2, c);
	printf("%s \n",strrchr(s1, c));
	printf("%s",ft_strrchr(s2, c));
	return (0);
}