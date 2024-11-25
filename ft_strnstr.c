/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciendacunha <luciendacunha@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 23:07:30 by luciendacun       #+#    #+#             */
/*   Updated: 2024/11/19 00:17:55 by luciendacun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;
	size_t	temp;

	i = 0;
	if (!needle[i])
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			temp = i;
			while (haystack[temp] && haystack[temp] == needle[j] && temp < len)
			{
				temp++;
				j++;
				if (j == ft_strlen(needle))
					return ((char *)haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}
