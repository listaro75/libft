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

	size = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		size = 1;
	}
	while (n > 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

void	ft_toa(int size, long nb, char *ptr)
{
	while (nb > 0)
	{
		ptr[size] = (nb % 10) + '0';
		nb = nb / 10;
		size--;
	}
}

char	*ft_itoa(int n)
{
	int		size;
	long	nb;
	char	*ptr;

	nb = (long)n;
	size = ft_count(nb);
	ptr = (char *)malloc((size + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[size] = '\0';
	if (nb == 0)
	{
		ptr[0] = '0';
	}
	if (nb < 0)
	{
		ptr[0] = '-';
		nb = -nb;
	}
	size--;
	ft_toa(size, nb, ptr);
	return (ptr);
}
