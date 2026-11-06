NAME	= phonebook
CC		= c++
CFLAGS	= -Wextra -Werror -Wall -std=c++98

HPP		= Contact.hpp PhoneBook.hpp
SRC		= main.cpp PhoneBook.cpp Contact.cpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HPP) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
