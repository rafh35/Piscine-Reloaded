NAME = libft.a

SRC =	./srcs/ft_putchar.c \
		./srcs/ft_putstr.c \
		./srcs/ft_swap.c \
		./srcs/ft_strcmp.c \
		./srcs/ft_strlen.c \

HEADERS =	./includes/

OBJ = ./ft_putchar.o ./ft_putstr.o ./ft_swap.o ./ft_strcmp.o ./ft_strlen.o

all: $(NAME)

$(NAME): 
	gcc -c -Wall -Wextra -Werror $(SRC) -I $(HEADERS)
	ar rc $(NAME) $(OBJ)
clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
