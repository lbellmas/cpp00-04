NAME	= Harl
CC		= c++
CFLAGS	= -Wextra -Werror -Wall -std=c++98

# Todos los .cpp en el directorio actual
SRC		= main.cpp Harl.cpp
# Genera los .o correspondientes
OBJ		= $(SRC:.cpp=.o)

all: $(NAME) Makefile

$(NAME): $(OBJ) Harl.hpp
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

# Regla genérica para compilar .cpp -> .o
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re