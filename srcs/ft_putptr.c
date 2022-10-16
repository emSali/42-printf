/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:27:43 by esali             #+#    #+#             */
/*   Updated: 2022/10/16 15:15:59 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putptr(void *ptr) {
	if (ptr == 0 || ptr == NULL) {
		ft_putstr("(nil)");
	}
	else {
		ft_putstr("0x");
		convert((unsigned long int) ptr);
	}
}
