/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printX.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slebik <slebik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 10:38:24 by slebik            #+#    #+#             */
/*   Updated: 2024/11/20 12:32:49 by slebik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	hexx(unsigned int n)
{
	const char	*base;

	base = "0123456789ABCDEF";
	if (n >= 16)
		hexx(n / 16);
	ft_putchar(base[n % 16]);
}

int	printxx(int n)
{
	unsigned int	un;

	if (n < 0)
	{
		un = (unsigned int)n;
		hexx(un);
		return (8);
	}
	else
		un = n;
	hexx(un);
	return (countx(un));
}
