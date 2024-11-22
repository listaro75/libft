/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-21 15:50:26 by luda-cun          #+#    #+#             */
/*   Updated: 2024-11-21 15:50:26 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (!s1[i])
	{
		ptr = (char *)malloc(sizeof(char) * 1);
		*ptr = 0;
		return (ptr);
	}
	while (ft_strchr(set, s1[i]) && i <= j)
		i++;
	if (i > j)
		return (ft_strdup(s1 + j + 1));
	while (ft_strchr(set, s1[j]) && j >= 0)
		j--;
	ptr = malloc(j - i + 2);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, &s1[i], j - i + 2);
	return (ptr);
}
