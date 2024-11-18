/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciendacunha <luciendacunha@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:43:53 by luda-cun          #+#    #+#             */
/*   Updated: 2024/11/19 00:18:32 by luciendacun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
    char s1[] = "lucien est style";
    char s2[] = "le";
    printf("%s \n",strnstr(s1,s2,20));
    printf("%s",ft_strnstr(s1,s2,20));
    return (0);
}