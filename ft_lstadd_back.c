/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:44:03 by luda-cun          #+#    #+#             */
/*   Updated: 2024/11/27 19:52:38 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*skip;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	skip = *lst;
	while (skip && skip->next)
	{
		skip = skip->next;
	}
	skip->next = new;
}