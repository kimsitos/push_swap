NAME = ../checker

LIB = ../libft/libft.a

MOV = ../movements/movements.a

LST = ../list/list.a

SRC = main.c case_movements.c ../utils.c ../parse.c

OBJ = $(SRC:.c=.o)

OBJLST = $(SRCLIST:.c=.o)

all : $(NAME)

$(LIB): ../libft/Makefile
	make -C ../libft all

$(MOV): ../movements/Makefile
	make -C ../movements all

$(LST): ../list/Makefile
	make -C ../list all

$(NAME): $(OBJ) $(LIB) $(MOV) $(LST)
	cc -Wall -Werror -Wextra $(OBJ) $(LIB) $(MOV) $(LST) -o $(NAME)

clean: 
	$(RM) $(OBJ) $(OBJLST)
	make -C ../libft clean
	make -C ../movements clean
	make -C ../list clean

fclean: clean
	$(RM) $(NAME)
	make -C ../libft fclean
	make -C ../movements fclean
	make -C ../list fclean

re: fclean all

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re
