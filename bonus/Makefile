NAME = checker

LIB = ../libft/libft.a

SRC = main.c ../utils.c 

SRCLIST = ../list/ft_lstnew.c ../list/ft_lstadd_front.c ../list/ft_lstsize.c\
../list/ft_lstlast.c ../list/ft_lstadd_back.c ../list/ft_lstdelone.c ../list/ft_lstclear.c ../list/ft_lstiter.c

OBJ = $(SRC:.c=.o)

OBJLST = $(SRCLIST:.c=.o)

MAKELIB = make -C ../libft

$(LIB): ../libft/Makefile
	$(MAKELIB) all
all : $(NAME)

$(NAME): $(OBJ) $(OBJLST) $(LIB)
	cc -Wall -Werror -Wextra $(OBJ) $(OBJLST) $(LIB) -o $(NAME)

clean: 
	$(RM) $(OBJ) $(OBJLST)
	$(MAKELIB) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKELIB) fclean

re: fclean all

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re
