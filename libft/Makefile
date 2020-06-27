# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/19 15:57:52 by gkhodizo          #+#    #+#              #
#    Updated: 2020/02/23 14:05:17 by gkhodizo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CCFLAGS = -Wall -Wextra -Werror

HEADER = -I libft.h

NAMES = ./ft_memset ./ft_bzero ./ft_memcpy ./ft_memccpy ./ft_memmove \
	   	./ft_memchr ./ft_memcmp ./ft_strlen ./ft_strdup ./ft_strcpy \
		./ft_strncpy ./ft_strcat ./ft_strncat ./ft_strlcat ./ft_strchr \
		./ft_strrchr ./ft_strstr ./ft_strnstr ./ft_strcmp ./ft_strncmp \
		./ft_atoi ./ft_isalpha ./ft_isdigit ./ft_isalnum ./ft_isascii \
		./ft_isprint ./ft_toupper ./ft_tolower ./ft_memalloc ./ft_memdel \
		./ft_strnew ./ft_strdel ./ft_strclr ./ft_striter ./ft_striteri \
		./ft_strmap ./ft_strmapi ./ft_strequ ./ft_strnequ ./ft_strsub \
		./ft_strjoin ./ft_strtrim ./ft_strsplit ./ft_itoa ./ft_putchar \
		./ft_putstr ./ft_putendl ./ft_putnbr ./ft_putchar_fd ./ft_putstr_fd \
		./ft_putendl_fd ./ft_putnbr_fd ./ft_lstnew ./ft_lstdelone ./ft_lstdel \
		./ft_lstadd ./ft_lstiter ./ft_lstmap ./ft_lstaddend ./ft_lstaddafter \
		./ft_lstlen ./ft_lstdelbegin ./ft_lstdelend ./ft_print_bits \

SRCS = $(addsuffix .c, $(NAMES))

OBJ = $(addsuffix .o, $(NAMES))

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ):
	$(CC) $(CFLAGS) -c $(SRCS)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -rf $(NAME)

re: fclean all
