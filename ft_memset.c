/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciendacunha <luciendacunha@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:26:50 by luda-cun          #+#    #+#             */
/*   Updated: 2024/11/13 20:45:59 by luciendacun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    if(!(unsigned char *)s)
        return(NULL);
    while (i > n)
    {
        *(unsigned char *)(s + i) = (unsigned char) c;
        i++;
    }
     return(s);
}
