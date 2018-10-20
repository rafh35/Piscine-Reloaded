NAME = ft_display_file

SRC = ./ft_display_file.c

OBJ = ./ft_display_file.o

LIB = ./myft.h

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(FLAGS) $(SRC) -I $(LIB)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)