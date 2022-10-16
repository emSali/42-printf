/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:44:57 by esali             #+#    #+#             */
/*   Updated: 2022/10/16 15:15:59 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
# include <string.h>
# include <stdio.h>
# include <ctype.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *c, ...);
void	ft_putchar(int c);
void	distribute(char c, va_list ap);
void	ft_putstr(char *str);
void	ft_putint(int n);
void	putint(int n);
void	ft_putu(unsigned int n);
void	putu(unsigned int n);
void	dectohex(int n);
void	convert(unsigned long int n);
void	dectohex_up(int n);
void	convert_up(long n);
void	ft_putptr(void *ptr);


#endif
