/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-21 15:50:26 by luda-cun          #+#    #+#             */
/*   Updated: 2024-11-21 15:50:26 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_modif(const char *s1,char c)
// {
// 	char	*ptr;
// 	ptr = ft_strdup(s1);
// 	return (ptr)
// }

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	ptr = ft_strdup(s1);
	i = 0;
	j = 0;
	while(ptr[i])
	{
		j = i;
		if (ptr[i] == set[0])
		{

		}
		i++;
	}
	return (ptr);
}
int	main(void)
{
	char s1[] = "lucien lucien";
	printf("%s",ft_strtrim(s1, "u"));
	return (0);
}