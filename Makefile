NAME = push_swap

CC = cc

CFLAGS = -Wall -Werror -Wextra

LIB = libft/libft.a

SRC = main.c checker.c debug.c

RM = rm -f

OBJ = $(SRC:.c=.o)

MAKELIB = make -C libft

all: $(NAME)

$(LIB): libft/Makefile
	$(MAKELIB) all bonus

$(NAME): $(OBJ) $(LIB)
	$(CC) $(CFLAGS) $(OBJ) $(LIB) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	$(RM) $(OBJ)
	$(MAKELIB) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKELIB) fclean

re: fclean all

.PHONY: all clean fclean re