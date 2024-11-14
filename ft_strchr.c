/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucien <lucien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 03:52:06 by lucien            #+#    #+#             */
/*   Updated: 2024/08/22 14:05:19 by lucien           ###   ########.fr       */
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
		if (str[i] == c)
			return ((char *)(str + i));
		i++;
	}
	
	if(str[i] == c)
			return ((char *)(str + i));
	return (NULL);
	
}



