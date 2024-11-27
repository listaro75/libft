/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:37:39 by luda-cun          #+#    #+#             */
/*   Updated: 2024/11/27 15:59:44 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*find;

	find = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char) c)
			find = ((char *)(s + i));
		i++;
	}
	if (s[i] == (unsigned char)c)
		find = (char *)(s + i);
	return (find);
}
