/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucien <lucien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 23:37:19 by lucien            #+#    #+#             */
/*   Updated: 2024/08/20 19:01:40 by lucien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void) argc;
	printf("****** Test de mes fonctions : ***************[OK]/[KO]\n");
	//**************************** ft_strlen *****************************
	printf("| ft_strlen |");
	int a;
	int b;
	a = ft_strlen(argv[1]);
	b = strlen(argv[1]);
	printf(" my = %d		true = %d	", a, b);
	if( a == b)
		printf("[OK] \n");
	else 
		printf("[KO] \n");
	//**************************** ft_strcpy *****************************
	printf("| ft_strcpy |");
	char tab1[] = "lucien";
	char tab2[] = "jeanne";
	char tab11[] = "lucien";
	char tab22[] = "jeanne";  
	printf(" my = %s	true = %s	",ft_strcpy(tab1, tab2),strcpy(tab11, tab22));
	if (ft_strcmp(tab1, tab11) == 0)
			printf("[OK] \n");
	else
				printf(" [KO] \n");
	//**************************** ft_strcmp *****************************
	printf("| ft_strcmp |");
	a = ft_strcmp(argv[1], argv[2]);
	b = strcmp(argv[1], argv[2]);
	printf(" my = %d		true = %d	", a, b);
	if( a == b)
		printf("[OK] \n");
	else 
		printf("[KO] \n");
	//*******************************************************************
	printf("*************************************\n");
	return (0);
}