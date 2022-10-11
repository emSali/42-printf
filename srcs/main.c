/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:46:48 by esali             #+#    #+#             */
/*   Updated: 2022/10/11 16:03:10 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int main() {
    int count = 0;
    //char *str = "Hello = Hello!";
    //int nr = -2230;
    //void* p;
    //char c = 'c';

    printf("\n---PRINTF--");
    printf("\n");
    count = printf(" %c %c %c ", '0', 0, '1');
    printf("\ncount = %i\n", count);

    printf("\n\n---FT_PRINTF--");
    printf("\n");
    count = ft_printf(" %c %c %c ", '0', 0, '1');
    printf("\ncount = %i", count);
}
