CC=gcc
NAME=libft.a
FLAGS=-Wall -Werror -Wextra
SRC=ft_memset.c ft_strcpy.c ft_strncpy.c ft_strlen.c ft_strcmp.c ft_strncmp.c ft_strstr.c ft_bzero.c main.c
OBJ=*.o


all: $(NAME)

$(NAME):
	$(CC) -c $(FLAGS) $(SRC)
	ar -rsc $(NAME) $(OBJ)
	rm -r ft_*.o

gcc: $(NAME)
	$(CC) $(FLAGS) $(SRC)

gcclib: gcc
	$(CC) $(FLAGS) $(SRC) $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)
