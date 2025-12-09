NAME = movements.a

SRC = push.c reverse_rotate.c rotate.c swap.c

CC = cc

CFLAGS = -Wall -Werror -Wextra

OBJ = $(SRC:.c=.o)

RM = rm -f

AR = ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ 
clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	
re: fclean all

.PHONY: all clean fclean re