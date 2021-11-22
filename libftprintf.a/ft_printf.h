/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:15:38 by halwahed          #+#    #+#             */
/*   Updated: 2021/11/18 16:32:17 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>

/*ft_printf functions' prototypes */
int		ft_printf(const char *content, ...);
int		ft_args(char c, int *tab, int count);

/*ft_printf_2 functions' prototypes*/
int		ft_print_char(char c, int count);
int		ft_isdigit(int c);
int		ft_nbrlen(size_t nbr, size_t base);
int		ft_print_nbr(long n, int count);
size_t	ft_strlen(const char *s);
void	ft_print_str(char *str, int count);

/*ft_printf_3 functions' prototypes*/
void	ft_hexa_low(int n);
void	ft_hexa_up(int n);

/*ft_printf_4 functions' prototypes*/
size_t	ft_strlen(const char *s);
void	ft_print_str(char *str, int count);
void	ft_putpointer(int n);
void	ft_unsigned(unsigned int n);
#endif
