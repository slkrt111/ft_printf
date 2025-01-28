/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slebik <slebik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 19:52:52 by slebik            #+#    #+#             */
/*   Updated: 2024/11/25 13:15:01 by slebik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdbool.h>
# include <stdlib.h>
# include <limits.h>

void	ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_strlen(const char *str);
void	ft_putnbr(int nb);
void	ft_putunbr(unsigned int nb);
int		printd(int n);
int		printu(unsigned int n);
int		printc(char c);
int		printp(unsigned long n);
int		puthex(unsigned long n, const char *base);
int		prints(char *str);
int		printxx(int n);
int		printx(unsigned long n);
void	hexx(unsigned int n);
void	hex(unsigned long n);
int		countx(unsigned long n);
int		ucountlen(unsigned int n);
int		countlen(int n);
int		ft_printf(const	char *str, ...);
void	hexx(unsigned int n);

#endif