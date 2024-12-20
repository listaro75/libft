/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciendacunha <luciendacunha@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 09:52:06 by luda-cun          #+#    #+#             */
/*   Updated: 2024/11/18 20:57:32 by luciendacun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = ft_strlen(src);
	j = ft_strlen(dst);
	k = i + j;
	if (size <= j)
		return (i + size);
	i = 0;
	while (src[i] != 0 && j < size - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = 0;
	return (k);
}
// int main(){
// 	char s1[] = "333";
// 	char s2[] = "55555";
//     char s11[] = "333";
// 	char s22[] = "55555";
//     printf("%d \n %s\n",strlcat(s1,s2,5),s1);
//     printf("%d \n %s\n",ft_strlcat(s11,s22,5),s11);
// }