/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucien <lucien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:26:19 by lucien            #+#    #+#             */
/*   Updated: 2024/08/22 15:16:04 by lucien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		write(1, "-2", 2);
		nbr = 147483648;
	}
	if (nbr < 0)
	{
		ft_putchar('-');	
		nbr *= -1;
	}
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}
