/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:26:32 by luda-cun          #+#    #+#             */
/*   Updated: 2024/11/19 22:13:37 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*new;
	// size_t i;
	
	// i = 0;
	if(count <= 0 && size != 0)
		return(NULL);
	new = (void *)malloc(count * size);
	if(!new)
		return (NULL);
	// while (i < count)
	// {
	// 	*(unsigned char *)(new + i) = 0;
	// 	i++;
	// }
	ft_bzero(new, size * count);
	return(new);
}
