# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: halwahed <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/18 13:46:31 by halwahed          #+#    #+#              #
#    Updated: 2021/11/18 16:26:57 by halwahed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	ft_printf.c	ft_printf_2.c	ft_printf_3.c	ft_printf_4.c

OBJ	=	$(SRCS:%.c=%.o)

RM	=	rm -f
AR	= 	ar -c -r
CC	=	gcc
CFLAGS	=	-Wall -Wextra -Werror

.PHONY	:	all clean fclean re bonus

all	:	$(NAME)

$(NAME)	: $(OBJ) 	
	$(AR) $(NAME) $?

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	@rm -f $(OBJ)

fclean	:	clean
	@$(RM) $(NAME)

re		:	fclean all
