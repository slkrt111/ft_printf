/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slebik <slebik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:13:16 by slebik            #+#    #+#             */
/*   Updated: 2024/11/18 15:13:16 by slebik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	hex(unsigned long n)
{
	const char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
		hex(n / 16);
	ft_putchar(base[n % 16]);
}

int	countx(unsigned long n)
{
	int	len;

	len = 0;
	if (n == 0)
		len++;
	while (n)
	{
		n /= 16;
		len++;
	}
	return (len);
}

int	printx(unsigned long n)
{
	unsigned int	un;

	un = n;
	hex(un);
	return (countx(un));
}
