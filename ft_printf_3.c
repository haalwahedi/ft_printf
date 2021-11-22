/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:51:02 by halwahed          #+#    #+#             */
/*   Updated: 2021/11/22 17:17:13 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int	ft_hexa_low(unsigned int n, int count)
{	
	count = ft_putpointer(n, count);
	return (count);
}

int	ft_hexa_up(unsigned int n, int count)
{
	unsigned long long nbr;

	nbr = n % 16;
	if (n >= 16)
		count = ft_hexa_up(n / 16, count);
	if (nbr == 10)
		count = ft_print_char('A', count);
	else if (nbr == 11)
		count = ft_print_char('B', count);
	else if (nbr == 12)
		count = ft_print_char('C', count);
	else if (nbr == 13)
		count = ft_print_char('D', count);
	else if (nbr == 14)
		count = ft_print_char('E', count);
	else if (nbr == 15)
		count = ft_print_char('F', count);
	else
		count = ft_print_char(nbr + '0' , count);
	return (count);
}
