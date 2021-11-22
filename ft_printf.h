/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:15:38 by halwahed          #+#    #+#             */
/*   Updated: 2021/11/22 17:10:18 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

/*ft_printf functions' prototypes*/
int	ft_args(char c, va_list ap, int count);
int	ft_printf(const char *ptr, ...);

/*ft_printf_2 functions' prototypes*/
int	ft_isdigit(int c);
int	ft_print_char(int c, int count);
int	ft_print_nbr(int n, int count);
int	ft_nbrlen(size_t nbr, size_t base);
size_t	ft_strlen(const char *s);
int	ft_print_str(char *str, int count);

/*ft_printf_3 functions' prototypes*/
int	ft_hexa_up(unsigned int n, int count);
int	ft_hexa_low(unsigned int n, int count);

/*ft_printf_4 functions' prototypes*/
size_t	ft_strlen(const char *s);
int	ft_print_str(char *str, int count);
int ft_printox(unsigned long long n, int count);
int	ft_putpointer(unsigned long long n, int count);
int	ft_unsigned(unsigned int n, int count);

#endif
