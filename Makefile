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

so:
	gcc -c ft_*.c -Wall -Wextra -Werror
	gcc -shared -o libft.so -fPIC ft*.o
	rm *.o

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
