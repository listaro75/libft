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

char * ft_strchr( const char * string, int searchedChar )
{
	int	i;

	i = 0;
	if(!string)
		return (NULL);
	while (string[i])
	{
		if (string[i] == searchedChar)
			return ((char *)(string + i));
		i++;
	}
	
	if(string[i] == searchedChar)
			return ((char *)(string + i));
	return (NULL);
	
}



