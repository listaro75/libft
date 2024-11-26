/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:37:39 by luda-cun          #+#    #+#             */
/*   Updated: 2024/11/25 20:37:21 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*last_occurrence;

	last_occurrence = NULL;
	while (*str)
	{
		if (*str == (unsigned char)c)
			last_occurrence = (char *)str;
		str++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)str);
	return (last_occurrence);
}
