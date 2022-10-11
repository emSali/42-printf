# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esali <esali@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/13 15:30:18 by esali             #+#    #+#              #
#    Updated: 2022/10/11 16:01:28 by esali            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	srcs/main.c srcs/ft_printf.c srcs/ft_putstr.c srcs/ft_putint.c \
			srcs/ft_puthex.c srcs/ft_putptr.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-Wall -Wextra -Werror

all:	$(NAME)

$(NAME):$(OBJS)
		ar -rcs $(NAME) $(OBJS)
		gcc $(CFLAGS) $(OBJS)

clean:
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

re: 	fclean all
