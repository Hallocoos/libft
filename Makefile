NAME = libft.a
FLAGS = -Wall -Werror -Wextra
SRC = *.c
OBJ = *.o


all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRC)
	ar -rsc $(NAME) $(OBJ)
	rm -r ft_*.o

gcc:
	gcc $(FLAGS) $(SRC)

bzero:
	gcc $(FLAGS) ft_bzero.c

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)
