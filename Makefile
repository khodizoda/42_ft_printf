# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/15 00:44:17 by gkhodizo          #+#    #+#              #
#    Updated: 2020/07/22 16:15:29 by gkhodizo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CFLAGS =  -g -Wall -Wextra -Werror

HEADER = -I ft_printf.h

NAMES = ./ft_printf \
		./init_format \
		./parse_input \
		./parse_flags \
		./parse_width \
		./parse_precision \
		./parse_numeric \
		./parse_specifier \
		./parse_spec_value \
		./convert_char


SRCS = $(addsuffix .c, $(NAMES))

OBJ = $(addsuffix .o, $(NAMES))

.SILENT:

all: $(NAME)
	@echo Compiling $(NAME)...

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ):
	$(CC) $(CFLAGS) -c $(SRCS)

clean:
	@/bin/rm -f $(OBJ)
	@echo Deleting object files...

fclean: clean
	@/bin/rm -rf $(NAME)
	@echo Deleting $(NAME)...

re: fclean all
