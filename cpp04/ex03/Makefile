NAME	= Interface
CC		= c++
CFLAGS	= -Wextra -Werror -Wall -std=c++98 -fsanitize=address

# Todos los .cpp en el directorio actual
SRC		= main.cpp Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp AMateria.cpp
HPP		= Cure.hpp Ice.hpp Character.hpp MateriaSource.hpp AMateria.hpp ICharacter.hpp IMateriaSource.hpp
# Genera los .o correspondientes
OBJ		= $(SRC:.cpp=.o)

all: $(NAME) Makefile

$(NAME): $(OBJ) $(HPP)
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