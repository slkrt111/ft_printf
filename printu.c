/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printu.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slebik <slebik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 20:20:02 by slebik            #+#    #+#             */
/*   Updated: 2024/11/17 20:20:02 by slebik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printu(unsigned int n)
{
	int	len;

	len = ucountlen(n);
	ft_putunbr(n);
	return (len);
}

int	ucountlen(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	else
	{
		while (n > 0)
		{
			n /= 10;
			len++;
		}
	}
	return (len);
}
