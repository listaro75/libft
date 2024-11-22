/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-22 15:04:30 by luda-cun          #+#    #+#             */
/*   Updated: 2024-11-22 15:04:30 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count(long n)
{
	size_t	size;

	if(n < 0)
	{
		n = n * (-1);
		size = 1;
	}
	if(n == 0)
		size = 1;
	else 
	{
		while (n)
		{
			n = n / 10;
			size++;
		}
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		size;
	int		i;
	long int	save;
	char		*ptr;

	save = n;
	i = 0;
	size = ft_count(n);
	ptr = (char *)malloc(size * sizeof(char));
	if(!ptr)
		return (NULL);
	if(n < 0)
	{
		n = n * (-1);
		ptr[0] = '-';
		i++;
	}
	ptr[size] = 0;
	size--;
	while (n > i)
	{
		ptr[size] = n % 10;
		n = n / 10;
		size--;
	}
	return (ptr);
}
