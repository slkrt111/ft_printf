/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slebik <slebik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:59:29 by slebik            #+#    #+#             */
/*   Updated: 2024/11/25 13:30:38 by slebik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	veriftype(va_list args, char c)
{
	if (c == 'c')
		return (printc(va_arg(args, int)));
	else if (c == 's')
		return (prints(va_arg(args, char *)));
	else if (c == 'p')
		return (printp(va_arg(args, unsigned long)));
	else if (c == 'd' || c == 'i')
		return (printd(va_arg(args, int)));
	else if (c == 'u')
		return (printu(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (printx(va_arg(args, int)));
	else if (c == 'X')
		return (printxx(va_arg(args, int)));
	else if (c == '%')
	{
		ft_putchar('%');
		return (1);
	}
	else
	{
		ft_putchar('%');
		return (1);
	}
}

int	ft_printf(const	char *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, str);
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len += veriftype(args, str[i]);
		}
		else
		{
			ft_putchar(str[i]);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}

/*int main()
{
	ft_printf("raaah %sjsadu %s e3few %d \n", "hello world", "pelele", 150);
 	ft_printf("raaah %s %d %s %c %% % \n", "hello world", 750, "errrr", 'y');
	printf("\n \n \n \n");
	printf("raaah %sjsadu %s e3few %d \n", "hello world", "pelele", 150);
 	printf("raaah %s %d %s %c %% % \n", "hello world", 750, "errrr", 'y');
}*/
/*in t  main() 
{
     char *s;
    int i = 0;
    int fake;
    int real;

    printf("==== TEST DE %%x =====\n");
    fake = ft_printf("fake :[%x]\n", i);
    real = printf("real :[%x]\n", i);
    printf("Taille de Fake[%d]\nTaille de real [%d]\n", fake, real);
    printf("___________\n\n");
    i = 154475464;
    fake = ft_printf("fake :[%u]\n", i);
    real = printf("real :[%u]\n", i);
    printf("Taille de Fake[%d]\nTaille de real [%d]\n", fake, real);
    
    ft_printf("\n=====TEST DE NULL=====\n\n");
    fake = ft_printf(NULL);
    real = printf(NULL);
    printf("Taille de Fake[%d]\nTaille de real [%d]\n", fake, real);
    
    ft_printf("\n===== TEST DE %%p =====\n\n");
    s = "Salut le frere !";
    fake = ft_printf("fake :[%p]\n", s);
    real = printf("real :[%p]\n", s);
    printf("Taille de Fake[%d]\nTaille de real [%d]\n", fake, real);
    printf("___________\n\n");
    s = NULL;
    fake = ft_printf("fake :[%s]\n", s);
    real = printf("real :[%s]\n", s);
    printf("Taille de Fake[%d]\nTaille de real [%d]\n", fake, real);
    printf("\n===== TEST LONG MIN & MAX =====\n");
    fake = printf("real :[%p][%p]\n", LONG_MIN, LONG_MAX);
    real = ft_printf("fake :[%p][%p]\n", LONG_MIN, LONG_MAX);
    printf("Taille de Fake[%d]\nTaille de real [%d]\n", fake, real);

    printf("\n===== TEST ULONG MAX =====\n");
    fake = printf("real :[%p][%p]\n", ULONG_MAX, -ULONG_MAX);
    real = ft_printf("fake :[%p][%p]\n", ULONG_MAX, -ULONG_MAX);
    printf("Taille de Fake[%d]\nTaille de real [%d]\n", fake, real);
    ft_printf("\n===== TEST DE %%p =====\n\n");
    s = "echantelele";
    ft_printf("\n");
    fake = ft_printf("fake NULL %s NULL", NULL);
    ft_printf("\n");
    real = printf("real NULL %s NULL", NULL);
    ft_printf("\n");
    printf("\n\nTaille de Fake[%d]\nTaille de real [%d]\n", fake, real);
	ft_printf("fake %p %p \n", 0, 0);
	printf("real %p %p \n", 0, 0);
	ft_printf(NULL);
	printf(NULL);
    return 0;
}*/
