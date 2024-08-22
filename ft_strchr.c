/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucien <lucien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 03:52:06 by lucien            #+#    #+#             */
/*   Updated: 2024/08/22 04:04:06 by lucien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// char * ft_strchr( const char * string, int searchedChar )
// {
	
// }



#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "112o";
    char ch = 'o';
    
    char *result = strchr(str, ch);
    
    if (result != NULL) {
        printf("Le caractère '%c' est trouvé à la position : %ld\n", ch, result - str);
    } else {
        printf("Le caractère '%c' n'est pas trouvé.\n", ch);
    }
    
    return 0;
}
