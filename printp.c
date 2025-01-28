/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slebik <slebik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:59:38 by slebik            #+#    #+#             */
/*   Updated: 2024/11/18 16:59:38 by slebik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	puthex(unsigned long n, const char *base)
{
	int				len;
	char			c;
	unsigned long	base_len;

	len = 0;
	base_len = 0;
	while (base[base_len])
		base_len++;
	if (n >= base_len)
		len += puthex(n / base_len, base);
	c = base[n % base_len];
	len += write (1, &c, 1);
	return (len);
}

int	printp(unsigned long n)
{
	int	len;

	len = 2;
	if (n == 0)
	{
		ft_putstr("(nil)");
		return (5);
	}
	ft_putstr("0x");
	len += puthex(n, "0123456789abcdef");
	return (len);
}
