NAME = libftprintf.a

SRC = ft_printf.c \

SRC_LIBFT = libft/ft_strlen.c \
			
OBJ = $(SRC:.c=.o)

OBJ_LIBFT = $(SRC_LIBFT:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror -Ilibft

all: $(NAME)

$(NAME): $(OBJ) $(OBJ_LIBFT)
	ar -rsc $(NAME) $(OBJ) $(OBJ_LIBFT)

clean:
	rm -f $(OBJ) $(OBJ_LIBFT)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

