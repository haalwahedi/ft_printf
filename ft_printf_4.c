/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:12:32 by halwahed          #+#    #+#             */
/*   Updated: 2021/11/22 17:02:09 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/* calculates the string length*/
size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

/*prints the strings */
int	ft_print_str(char *str, int count)
{
	if (str)
	{
		write (1, str, ft_strlen(str));
		count += ft_strlen(str);
	}
	else
		count = ft_print_str("(null)", count);
	return (count);
}

int ft_printox(unsigned long long n, int count)
{
	count = ft_print_str("0x", count);
	count = ft_putpointer(n, count);
	return (count);
}

int	ft_putpointer(unsigned long long n, int count)
{
	unsigned long long nbr;

	nbr = n % 16;
	if (n >= 16)
		count = ft_putpointer(n / 16, count);
	if (nbr == 10)
		count = ft_print_char('a', count);
	else if (nbr == 11)
		count = ft_print_char('b', count);
	else if (nbr == 12)
		count = ft_print_char('c', count);
	else if (nbr == 13)
		count = ft_print_char('d', count);
	else if (nbr == 14)
		count = ft_print_char('e', count);
	else if (nbr == 15)
		count = ft_print_char('f', count);
	else
		count = ft_print_char(nbr + '0' , count);
	return (count);
}

int	ft_unsigned(unsigned int n, int count)
{
	if (n >= 10)
		count = ft_print_nbr(n / 10, count);
	count = ft_print_char(n % 10 + '0', count);
	return (count);
}
