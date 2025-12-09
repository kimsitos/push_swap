NAME = list.a

SRC = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c\
ft_lstiter.c ft_lstlast.c ft_lstnew.c ft_lstsize.c

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