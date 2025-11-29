CC = gcc
CFLAGS = -Wall -Wextra -Werror -I include
SRC = src/ft_isalpha.c src/ft_isdigit.c src/ft_strlen.c src/ft_memcpy.c src/ft_atoi.c src/ft_strdup.c
OBJ = $(SRC:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re