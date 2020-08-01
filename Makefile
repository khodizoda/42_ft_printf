# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/15 00:44:17 by gkhodizo          #+#    #+#              #
#    Updated: 2020/08/01 13:21:45 by gkhodizo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT = ./libft/libft.a

CC = gcc

CFLAGS =  -g -Wall -Wextra -Werror

HEADER = -I ft_printf.h

NAMES = ./ft_printf \
		./init_format \
		./reset_format \
		./parse_input \
		./parse_flags \
		./parse_width \
		./parse_precision \
		./parse_numeric \
		./parse_specifier \
		./parse_spec_value \
		./null_char \
		./format_hex \
		./format_input \
		./format_padding \
		./format_precision_char \
		./format_precision_num \
		./format_width_char \
		./format_width_num \

SRCS = $(addsuffix .c, $(NAMES))

OBJ = $(addsuffix .o, $(NAMES))

.SILENT:

all: $(NAME)
	@echo Compiling $(NAME)...

$(LIBFT):
	make -C libft/

$(NAME): $(LIBFT) $(OBJ)
	cp $(LIBFT) $(NAME)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ):
	$(CC) $(CFLAGS) -c $(SRCS)

clean:
	@/bin/rm -f $(OBJ)
	@echo Deleting object files...

fclean: clean
	@/bin/rm -rf $(NAME)
	@echo Deleting $(NAME)...

re: fclean all
