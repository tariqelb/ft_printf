# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/07 08:44:18 by tel-bouh          #+#    #+#              #
#    Updated: 2021/11/23 19:33:03 by tel-bouh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ./ft_printf.c ./ft_printf_utils.c

OBJ = ./ft_printf.o ./ft_printf_utils.o


flags = -c -Werror -Wextra -Wall

all: $(NAME)

$(NAME):
	cc  $(flags) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
