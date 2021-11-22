/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:47:49 by halwahed          #+#    #+#             */
/*   Updated: 2021/11/22 17:26:06 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "ft_printf.h"

int	ft_args(char c, va_list ap, int count)
{		
	if (c == 'c')
		count = ft_print_char(va_arg(ap, int), count);
	else if (c == '%')
		count = ft_print_char('%', count);
	else if (c == 's')
		count = ft_print_str(va_arg(ap, char *), count);
	else if (c == 'd' || c == 'i')
		count = ft_print_nbr(va_arg(ap, int), count);
	else if (c == 'x')
		count = ft_hexa_low(va_arg(ap, unsigned int), count);
	else if (c == 'X')
		count = ft_hexa_up(va_arg(ap, unsigned int), count);
	else if (c == 'p')
		count = ft_printox(va_arg(ap, unsigned long long), count);
	else if (c == 'u')
		count = ft_unsigned(va_arg(ap, unsigned int), count);
	return (count);
}

/*the start of the function*/
int	ft_printf(const char *ptr, ...)
{
	va_list	args;
	int		ct;
	int		i;

	i = 0;
	va_start(args, ptr);
	ct = 0;
	while (ptr[i])
	{
		if (ptr[i] != '%')
		{
			ct = ft_print_char(ptr[i], ct);
		}
		else if (ptr[i] == '%')
		{
			ct = ft_args(ptr[++i], args, ct);
		}
		i++;
	}
	va_end(args);
	return (ct);
}
