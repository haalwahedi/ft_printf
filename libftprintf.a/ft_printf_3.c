/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:51:02 by halwahed          #+#    #+#             */
/*   Updated: 2021/11/21 16:16:32 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

void	ft_hexa_low(int n, int count)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		ft_print_char('-', count);
	}
	if (n == 10)
		ft_print_char('a', count);
	if (n == 11)
		ft_print_char('b', count);
	if (n == 12)
		ft_print_char('c', count);
	if (n == 13)
		ft_print_char('d', count);
	if (n == 14)
		ft_print_char('e', count);
	if (n == 15)
		ft_print_char('f', count);
	if (n >= 16)
		ft_hexa_low(n / 16, count);
	ft_print_char(n % 16 + '0', count);
}

void	ft_hexa_up(int n, int count)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		ft_print_char('-', count);
	}
	if (n == 10)
		ft_print_char('A', count);
	if (n == 11)
		ft_print_char('B', count);
	if (n == 12)
		ft_print_char('C', count);
	if (n == 13)
		ft_print_char('D', count);
	if (n == 14)
		ft_print_char('E', count);
	if (n == 15)
		ft_print_char('F', count);
	if (n >= 16)
		ft_hexa_up(n / 16, count);
	ft_print_char(n % 16 + '0', count);
}
