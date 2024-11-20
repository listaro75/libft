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
	size_t	j;
	size_t	k;
	size_t	save;

	i = 0;
	j = 0;
	if (needle[0] == 0)
		return ((char *)haystack);
	while (haystack[i])
	{
		if (i >= len)
			return (NULL);
		if (haystack[i] == needle[j])
		{
			k = i;
			while (needle[j])
			{
				if (k >= len)
					return (NULL);
				save = i;
				if (haystack[k] == needle[j])
				{
					k++;
					j++;
				}
				else
					break ;
			}
			if (needle[j] == 0)
				return ((char *)(haystack + save));
			j = 0;
		}
		i++;
	}
	return (NULL);
}
