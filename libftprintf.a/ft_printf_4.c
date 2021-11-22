/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:12:32 by halwahed          #+#    #+#             */
/*   Updated: 2021/11/21 16:29:49 by halwahed         ###   ########.fr       */
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
void	ft_print_str(char *str, int count)
{
	if (str)
	{
		write (1, &str, ft_strlen(str));
		count += ft_strlen(str);
	}
	else
		ft_print_str("NULL", count);
}

void	ft_putpointer(int n, int count)
{
	ft_print_str("0x", count);
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
		ft_hexa_up (n / 16, count);
	ft_print_char(n % 16 + '0', count);
}

void	ft_unsigned(unsigned int n, int count)
{
	if (n >= 10)
		ft_print_nbr(n / 10, count);
	ft_print_char(n % 10 + '0', count);
}
