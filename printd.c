/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slebik <slebik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:33:03 by slebik            #+#    #+#             */
/*   Updated: 2024/11/20 12:33:58 by slebik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printd(int n)
{
	int	len;

	len = countlen(n);
	ft_putnbr(n);
	return (len);
}

int	countlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		len++;
		n = -n;
	}
	{
		while (n > 0)
		{
			n /= 10;
			len++;
		}
	}
	return (len);
}
