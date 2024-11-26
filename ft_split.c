/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-26 11:23:30 by luda-cun          #+#    #+#             */
/*   Updated: 2024-11-26 11:23:30 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_world(char *s, int c)
{
	size_t	i;
	size_t	size;

	size = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			size++;
			while (s[i] == c)
				i++;
			
		}
		
		i++;
	}
	return (size);
}

void	ft_splitff(char s, char c)
{
	printf("%zu",ft_count_world(s, c));
}

int main(void)
{
	ft_splitff("jikiji ji ji ji ji ji jrijfierf jj irjei fji erj", ' ');
	return 0;
}