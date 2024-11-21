/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-21 12:12:55 by luda-cun          #+#    #+#             */
/*   Updated: 2024-11-21 12:12:55 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	size_t	i;

	i = 0;
	new = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!new)
		return (NULL);
	while (s[i])
	{
		new[i] = *(char *)(s + i);
		i++;
	}
	new[i] = 0;
	return (new);
}
