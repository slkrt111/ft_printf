/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slebik <slebik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 20:20:57 by slebik            #+#    #+#             */
/*   Updated: 2024/11/17 20:20:57 by slebik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr(unsigned int nb)
{
	if (nb == 4294967295)
	{
		ft_putstr("4294967295");
		return ;
	}
	if (nb <= 9)
		ft_putchar(nb + '0');
	else
	{
		ft_putunbr(nb / 10);
		ft_putunbr(nb % 10);
	}
}
