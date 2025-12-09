NAME = push_swap

CC = cc

CFLAGS = -Wall -Werror -Wextra

LIB = libft/libft.a

MOV = movements/movements.a

LST = list/list.a

SRC = main.c parse.c utils.c sort/sort_small.c sort/turk.c sort/set_costs.c sort/move_to_top.c

RM = rm -f

OBJ = $(SRC:.c=.o)

OBJLST = $(SRCLIST:.c=.o)

MAKELIB = make -C libft

all: $(NAME)

$(LIB): libft/Makefile
	make -C libft all

$(MOV): movements/Makefile
	make -C movements all

$(LST): list/Makefile
	make -C list all

$(NAME): $(OBJ) $(LIB) $(MOV) $(LST)
	$(CC) $(CFLAGS) $(OBJ) $(LIB) $(MOV) $(LST) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	$(RM) $(OBJ) $(OBJLST)
	make -C libft clean
	make -C movements clean
	make -C list clean

fclean: clean
	$(RM) $(NAME)
	make -C libft fclean
	make -C movements fclean
	make -C list fclean

re: fclean all

.PHONY: all clean fclean re