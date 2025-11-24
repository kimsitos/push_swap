# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/21 15:37:34 by stcozaci          #+#    #+#              #
#    Updated: 2025/11/24 12:15:02 by stcozaci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc

CFLAGS = -Wall -Werror -Wextra

LIB = libft/libft.a

SRC = main.c check_numbers.c

RM = rm -f

# OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) $(LIB) -o $(NAME)

# %.o: %.c
# 	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	$(RM) $(SRC)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re