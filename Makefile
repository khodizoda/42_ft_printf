# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/15 00:44:17 by gkhodizo          #+#    #+#              #
#    Updated: 2020/08/01 14:14:05 by gkhodizo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT = ./libft/libft.a

CC = gcc

CFLAGS =  -g -Wall -Wextra -Werror

HEADER = -I ft_printf.h

NAMES = ./ft_printf \
		./pf_init_format \
		./pf_reset_format \
		./pf_parse_input \
		./pf_parse_flags \
		./pf_parse_width \
		./pf_parse_precision \
		./pf_parse_numeric \
		./pf_parse_specifier \
		./pf_parse_spec_value \
		./pf_null_char \
		./pf_format_hex \
		./pf_format_input \
		./pf_format_padding \
		./pf_format_precision_char \
		./pf_format_precision_num \
		./pf_format_width_char \
		./pf_format_width_num \

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
