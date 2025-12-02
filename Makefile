NAME = push_swap

CC = cc

CFLAGS = -Wall -Werror -Wextra

LIB = libft/libft.a

SRC = main.c checker.c debug.c utils.c swap.c push.c rotate.c reverse_rotate.c

SRCLIST = list/ft_lstnew.c list/ft_lstadd_front.c list/ft_lstsize.c\
list/ft_lstlast.c list/ft_lstadd_back.c list/ft_lstdelone.c list/ft_lstclear.c list/ft_lstiter.c

RM = rm -f

OBJ = $(SRC:.c=.o)

OBJLST = $(SRCLIST:.c=.o)

MAKELIB = make -C libft

all: $(NAME)

$(LIB): libft/Makefile
	$(MAKELIB) all

$(NAME): $(OBJ) $(LIB) $(OBJLST)
	$(CC) $(CFLAGS) $(OBJ) $(OBJLST) $(LIB) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	$(RM) $(OBJ) $(OBJLST)
	$(MAKELIB) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKELIB) fclean

re: fclean all

.PHONY: all clean fclean re