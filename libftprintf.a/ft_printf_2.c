/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:57:04 by halwahed          #+#    #+#             */
/*   Updated: 2021/11/21 16:13:07 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/* check if the c should be initiated as a char or int?
 * this fuction should print n times the character*/
int	ft_print_char(char c, int count)
{
	write (1, &c, 1);
	count++;
	return (count);
}

/*should it return thedigit or the count just like the rest?
 * This function checks for a digit (0 - 9)*/
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/* get the number of the numeric places according to the specified base */
int	ft_nbrlen(size_t nbr, size_t base)
{
	int	len;

	if (nbr == 0)
		return (1);
	len = 0;
	while (nbr)
	{
		nbr = nbr / base;
		++len;
	}
	return (len);
}

/* prints the number and assign it a positive or negative sign */
int	ft_print_nbr(long n, int count)
{
	unsigned int	nbr;

	nbr = n;
	if (n < 0)
	{
		ft_print_char('-', count);
		nbr = -n;
	}
	if (nbr >= 10)
		ft_print_nbr(nbr / 10, count);
	ft_print_char((nbr % 10 + '0'), count);
	return (count);
}
