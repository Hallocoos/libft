CC=gcc
NAME=libft.a
FLAGS=-Wall -Werror -Wextra
SRC=*.c
OBJ=*.o
OPT=-c -I


all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(OPT) $(SRC)
	ar -rcv $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
