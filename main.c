/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucien <lucien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 23:37:19 by lucien            #+#    #+#             */
/*   Updated: 2024/08/20 14:47:20 by lucien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void) argc;
	printf("****** Test de mes fonctions : ******\n");
	//**************************** ft_strlen *****************************
	printf("| ft_strlen");
	int a;
	int b;
	a = ft_strlen(argv[1]);
	b = strlen(argv[1]);
	if( a == b)
		printf(" [OK] \n");
	else 
		printf(" [KO] \n");
	//**************************** ft_strcpy *****************************

	return (0);
}