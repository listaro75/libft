/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-18 15:43:53 by luda-cun          #+#    #+#             */
/*   Updated: 2024-11-18 15:43:53 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
    int c;

    c = 1;
    printf("isalpha = %d",isalpha('c'));
    printf("ft_isalpha = %d",ft_isalpha('c'));
}