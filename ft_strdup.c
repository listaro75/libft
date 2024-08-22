/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucien <lucien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 03:16:07 by lucien            #+#    #+#             */
/*   Updated: 2024/08/22 03:35:14 by lucien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	
	char	*copy = NULL;
	int	l;

	l = ft_strlen(source) + 1;
	if (!source)
		return (NULL);
	copy = (char *) malloc(l * sizeof(char));
	if (!copy)
		return (NULL);
	ft_strcpy(copy, source);
	return (copy);
}

