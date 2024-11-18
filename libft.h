/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-18 16:42:55 by luda-cun          #+#    #+#             */
/*   Updated: 2024-11-18 16:42:55 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n);
void *ft_memset(void *s, int c, size_t n);
int	ft_atoi(const char *nptr);


#endif