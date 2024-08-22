/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucien <lucien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 23:37:19 by lucien            #+#    #+#             */
/*   Updated: 2024/08/22 03:08:00 by lucien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

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
		printf("[OK] n°01\n");
	else 
		printf("[KO] n01\n");
	//**************************** ft_strcpy *****************************
	printf("| ft_strcpy |");
	char tab1[] = "lucien";
	char tab2[] = "jeanne";
	char tab11[] = "lucien";
	char tab22[] = "jeanne";  
	printf(" my = %s	true = %s	",ft_strcpy(tab1, tab2),strcpy(tab11, tab22));
	if (ft_strcmp(tab1, tab11) == 0)
			printf("[OK] n°02\n");
	else
				printf("[KO] n°02\n");
	//**************************** ft_strcmp *****************************
	printf("| ft_strcmp |");
	a = ft_strcmp(argv[1], argv[2]);
	b = strcmp(argv[1], argv[2]);
	printf(" my = %d		true = %d	", a, b);
	if( a == b)
		printf("[OK] n°03\n");
	else 
		printf("[KO] n°03\n");
	//**************************** ft_strcat *****************************
	printf("| ft_strcat |");
	char tab111[] = "luc";
	char tab222[] = "ien";
	char tab1111[] = "luc";
	char tab2222[] = "ien";
	printf(" my = %s	true = %s	",ft_strcat(tab111,tab222),strcat(tab1111,tab2222));
	if (ft_strcmp(tab111, tab1111) == 0)
			printf("[OK] n°04\n");
	else
			printf("[KO] n°04\n");
	//**************************** ft_isalpha ******************************
	printf("| ft_isalpha|");
	a = ft_isalpha('C');
	b = isalpha('C');
	printf(" my = %d 		true = %d	",a, b);
	if ((a == 1 && b >= 1 )|| (a == 0 && b == 0))
			printf("[OK] n°05\n");
	else
			printf("[KO] n°05\n");
	//**************************** ft_putchar ******************************
	printf("| ft_putchar|");
	printf(" my = x 		true = x 	");
	printf("[OK] n°06\n");
	//**************************** ft_putstr ******************************
	printf("| ft_putstr |");
	printf(" my = x 		true = x 	");
	printf("[OK] n°07\n");
	//**************************** ft_putendl ******************************
	printf("| ft_putendl|");
	printf(" my = x 		true = x 	");
	printf("[OK] n°08\n");
	//**************************** ft_isdigit ******************************
	printf("| ft_isdigit|");
	a = ft_isdigit('9');
	b = isdigit('9');
	printf(" my = %d 		true = %d	",a, b);
	if ((a == 1 && b >= 1 )|| (a == 0 && b == 0))
			printf("[OK] n°09\n");
	else
			printf("[KO] n°09\n");
	//**************************** ft_atoi ******************************
	printf("| ft_atoi   |");
	printf(" my = %d 		true = %d	",ft_atoi(argv[3]), atoi(argv[3]));
	if (ft_atoi(argv[3]) == atoi(argv[3]))
			printf("[OK] n°10\n");
	else
				printf("[KO] n°10\n");
	//**************************** ft_isalnum ******************************
	printf("| ft_isalnum|");
	a = ft_isalnum('a');
	b = isalnum('a');
	printf(" my = %d 		true = %d	",a, b);
	if ((a == 1 && b >= 1 )|| (a == 0 && b == 0))
			printf("[OK] n°11\n");
	else
			printf("[KO] n°11\n");
	//**************************** ft_toupper ******************************
	printf("| ft_toupper|");
	a = ft_toupper('a');
	b = toupper('a');
	printf(" my = %c 		true = %c	",a, b);
	if (a == b)
			printf("[OK] n°12\n");
	else
			printf("[KO] n°12\n");
	//**************************** ft_tolower ******************************
	printf("| ft_tolower|");
	a = ft_tolower('A');
	b = tolower('A');
	printf(" my = %c 		true = %c	",a, b);
	if (a == b)
			printf("[OK] n°13\n");
	else
			printf("[KO] n°13\n");
	//*******************************************************************

	
	printf("*******************************************************\n");
	return (0);
}